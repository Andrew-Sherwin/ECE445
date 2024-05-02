/*
University of Illinois at Urbana-Champaign, ECE 445 Senior Design Laboratory (Spring 2024)
  Team No. 11, Automatic Humidity Sensing and Water Refilling Cool-Mist Humidifier
    Team Info.: Andrew Sherwin (zyxie2@illinois.edu), Woojin Kim (wkim51@illinois.edu), Jalen Chen (jalenc3@illinois.edu) 
    TA: Surya Vasanth
    Professor: Dr. Jonathon Schuh

Code for programming Humidifier Subsystem's ESP32
  List of functionalities (Provides Auto/Manual control of the Humidifier)
    A1. Auto Mode
      1. Receives Humiditity/Temperature data from Humidity Sensor Subsystem's ESP32 (through 2.4 GHz Wi-Fi)
      2. Set correspoding min-max (ideal range) target humiditity range based on the indoor temperature
        2.1 (strech-out goal) User can define the range between each sensor and the humidifier, based on the distance, reading will be more/less weighted in the calculation of ideal target range
      3. If humidity falls below the min, turn on (or maintain) the Fan operation
      4. If humidity goes beyond the max, turn off the Fan operation

    A2. Manual Mode
      1. Ignore the sensor data, user gets to control operation (On/Off) of the Fan

    Common functionality for Auto/Manual Mode (Water Tank)
      1. Open the water valve, if the water level reaches the bottom water level sensor
      2. Close the water valve, if the water level reaches the top water level sensor

    Common functionality for Auto/Manual Mode (Visualization and Auto/Manual Control)
      1. Visualize current readings of Humidity/Temperature of each (three) sensors on the Web
      2. User can select Auto/Manual mode through the Web
*/

#include <esp_now.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPAsyncWebServer.h>
#include <ESPmDNS.h>

// Variables to hold each sensor's humidity and temperature data
float humidity1;
float temperature1;

float humidity2;
float temperature2;

float humidity3;
float temperature3;

// Variables for GPIO pins
int fanPin = 12;
int valvePin = 11;

int bottomWaterLevelPin = 36;
int topWaterLevelPin = 35;

// HIGH = 1, LOW = 0
int fanState;
int valveState;

// HIGH = 1, LOW = 0
int manualFanState = 0;
int manualValveState = 0;

// Variables to hold average temp/humidity
float avgTemperature;
float avgHumidity;

// Flag for Manual/Auto Mode
int autoMode = 1;

// Flag for fill the water tank until the top sensor once started to fill
int fillToEnd = 1;

// timestamp for take avg. from only 1-2 sensors and for malfunction detection
unsigned long timestamp1 = 0;
unsigned long timestamp2 = 0;
unsigned long timestamp3 = 0;

// sensor On/Off flag for take avg. from only 1-2 sensors and for malfunction detection
int sensor1OnOFF = 0;
int sensor2OnOFF = 0;
int sensor3OnOFF = 0;

float ho1 = 12;

float to1 = 0;
float to2 = 0;
float to3 = 0;

// Web Server Access (ssid and password)
const char *ssid = "SmartHumidifer";
const char *password = "ECE445GROUP11";

// Web server port to 80, listens to the connected device request
AsyncWebServer server(80);

// Structure of message that will be sent (contains sender id, humidity, and temperature data)
typedef struct msg {
  int sensorNumber; // include unique identification of the sender in the message, so that the receiver can identify where the data came from
  float humidity; // include humidity data in the packet
  float temperature; // include temperature data in the packet
} msg;

// Define variable that will be used for the message
msg message;

// Callback function that is called every message received, acquire received data and save into the local variables
void DataRecvCb(const uint8_t *macAddr, const uint8_t *receiving, int size) {
  memcpy(&message, receiving, sizeof(message)); // memory copy the receiving data into the message structure to decode
  if (message.sensorNumber == 1) {
    // malfunction detection
    timestamp1 = millis();
    Serial.print("timestamp1 millis: ");
    Serial.println(timestamp1);
    sensor1OnOFF = 1;

    Serial.println("Message received from Humidity Sensor1");
    humidity1 = message.humidity + ho1;
    // Serial.print("Sensor #1 Humidity: ");
    // Serial.print(humidity1);
    // Serial.println("% rH");
    if (message.temperature < 25) {
      to1 = 0;
    }
    else if (25 <= message.temperature and message.temperature < 43) {
      to1 = -2 * (int((message.temperature + 1) / 2) - 12);
    }
    else {
      to1 = -20;
    }
    temperature1 = message.temperature + to1;
    // Serial.print("Sensor #1 Temperature: ");
    // Serial.print(temperature1);
    // Serial.println("'C");
    // Serial.println();
  }
  else if (message.sensorNumber == 2) {
    // malfunction detection
    timestamp2 = millis();
    Serial.print("timestamp2 millis: ");
    Serial.println(timestamp2);
    sensor2OnOFF = 1;

    Serial.println("Message received from Humidity Sensor2");
    humidity2 = message.humidity + ho1;
    // Serial.print("Sensor #2 Humidity: ");
    // Serial.print(humidity2);
    // Serial.println("% rH");
    if (message.temperature < 25) {
      to2 = 0;
    }
    else if (25 <= message.temperature and message.temperature < 43) {
      to2 = -2 * (int((message.temperature + 1) / 2) - 12);
    }
    else {
      to2 = -20;
    }
    temperature2 = message.temperature + to2;
    // Serial.print("Sensor #2 Temperature: ");
    // Serial.print(temperature2);
    // Serial.println("'C");
    // Serial.println();
  }
  else if (message.sensorNumber == 3) {
    // malfunction detection
    timestamp3 = millis();
    Serial.print("timestamp3 millis: ");
    Serial.println(timestamp3);
    sensor3OnOFF = 1;

    Serial.println("Message received from Humidity Sensor3");
    humidity3 = message.humidity + ho1;
    // Serial.print("Sensor #3 Humidity: ");
    // Serial.print(humidity3);
    // Serial.println("% rH");
    if (message.temperature < 25) {
      to3 = 0;
    }
    else if (25 <= message.temperature and message.temperature < 43) {
      to3 = -2 * (int((message.temperature + 1) / 2) - 12);
    }
    else {
      to3 = -20;
    }
    temperature3 = message.temperature + to3;
    // Serial.print("Sensor #3 Temperature: ");
    // Serial.print(temperature3);
    // Serial.println("'C");
    // Serial.println();
  }
}

void ManualMode() {
  autoMode = 0;
}
void AutoMode() {
  autoMode = 1;
  manualFanState = 0;
  manualValveState = 0;
}

void fanManualOn() {
  manualFanState = 1;
}
void fanManualOff() {
  manualFanState = 0;
}

void valveManualOn() {
  manualValveState = 1;
}
void valveManualOff() {
  manualValveState = 0;
}

void setup() {
  // Serial Monitor Setup (with transmit baud rate 115200)
  Serial.begin(115200);

  // Use pinMode to configure GPIO as Input/Output
  pinMode(fanPin, OUTPUT);
  pinMode(valvePin, OUTPUT);

  pinMode(bottomWaterLevelPin, INPUT);
  pinMode(topWaterLevelPin, INPUT);

  // WiFi Station Mode Setup, Humidity Sensor Subsystem's ESP32s will have access to the Humidifier Subsystem's ESP32
  WiFi.mode(WIFI_MODE_STA);

  // ESP-NOW protocol initialization
  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW Initialization Failed");
    return;
  }
  
  // Begin WiFi
  WiFi.softAP(ssid, password);

  // Print the ssid and IP address
  Serial.println("");
  Serial.print("Succesful connection to: ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());

  // Use mDNS so that user can access the Web through .local instead of IP Address directly
  if (MDNS.begin("YourSmartHumidifier")) { // Give name that goes before .local
    Serial.println("MDNS responder started successfully");
  }
  
  server.begin();
  Serial.println("HTTP server started");

  // root directory
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/html", "<html><head><meta http-equiv=\"refresh\" content=\"2\"></head><body> Current Operation Mode (Auto->1, Manual->0): " + String(autoMode)
    + "<br><br>Current Avg. Humidity: " + String(avgHumidity) + "% rH, "
    + "Current Avg. Temperature: " + String(avgTemperature) + "'C" + "<br>" + "<br>"
    + "Sensor#1 Humidity: " + String(humidity1) + "% rH, Temperature: " + String(temperature1) + "'C" + "<br>"
    + "Sensor#2 Humidity: " + String(humidity2) + "% rH, Temperature: " + String(temperature2) + "'C" + "<br>"
    + "Sensor#3 Humidity: " + String(humidity3) + "% rH, Temperature: " + String(temperature3) + "'C" + "<br>"
    + "<br><a href=\"/auto\">Click to set AUTO Mode</a>"
    + "<br><br><a href=\"/manual\">Click to set MANUAL Mode</a>"
    + "<br><br><a href=\"/fanmanualon\">Fan ON (Manual Mode Only)</a>&nbsp;&nbsp;&nbsp;&nbsp;<a href=\"/fanmanualoff\">Fan OFF (Manual Mode Only)</a>"
    + "<br><br><a href=\"/valvemanualon\">Valve ON (Manual Mode Only)</a>&nbsp;&nbsp;&nbsp;&nbsp;<a href=\"/valvemanualoff\">Valve OFF (Manual Mode Only)</a>"
    + "<br><br><a href=\"/\">Click to manually refresh the Page</a>"
    + "</head></html>");
  });

  server.on("/manual", HTTP_GET, [](AsyncWebServerRequest *request){
    ManualMode();
    request->redirect("/");
  });
  server.on("/auto", HTTP_GET, [](AsyncWebServerRequest *request){
    AutoMode();
    request->redirect("/");
  });

  server.on("/fanmanualon", HTTP_GET, [](AsyncWebServerRequest *request){
    fanManualOn();
    request->redirect("/");
  });
  server.on("/fanmanualoff", HTTP_GET, [](AsyncWebServerRequest *request){
    fanManualOff();
    request->redirect("/");
  });

  server.on("/valvemanualon", HTTP_GET, [](AsyncWebServerRequest *request){
    valveManualOn();
    request->redirect("/");
  });
  server.on("/valvemanualoff", HTTP_GET, [](AsyncWebServerRequest *request){
    valveManualOff();
    request->redirect("/");
  });

  // Acquiring MAC Address of the ESP32 so that other ESP32s can use it to access (will be only used when setting up the system)
  // Serial.print("MAC Address: ");
  // Serial.println(WiFi.macAddress()); // eg. MAC Address: 34:85:18:52:0B:50
  
  // Callback registration
  esp_now_register_recv_cb(DataRecvCb);
}

void loop() {
  // Turn the temperature and humidity data back to 0 if sensor is unplugged
  unsigned long loopMillis = millis();
  Serial.print("loop millis: ");
  Serial.println(loopMillis);
  if ((loopMillis - timestamp1) > 15000) {
    humidity1 = 0;
    temperature1 = 0;
    sensor1OnOFF = 0;
  }
  if ((loopMillis - timestamp2) > 15000) {
    humidity2 = 0;
    temperature2 = 0;
    sensor2OnOFF = 0;
  }
  if ((loopMillis - timestamp3) > 15000) {
    humidity3 = 0;
    temperature3 = 0;
    sensor3OnOFF = 0;
  }

  // Manual Override
  if (autoMode == 0) {
    // Water level sensor in HIGH in air, LOW in water contact
    int bottomWaterLevelState = digitalRead(bottomWaterLevelPin);
    int topWaterLevelState = digitalRead(topWaterLevelPin);

    int curNumSensors = sensor1OnOFF + sensor2OnOFF + sensor3OnOFF;
    // Averaging the temperature and humidity data (from three sensors)
    if (curNumSensors == 0) {
      avgTemperature = 0;
      avgHumidity = 0;
    }
    else {
      avgTemperature = (temperature1 + temperature2 + temperature3) / curNumSensors;
      avgHumidity = (humidity1 + humidity2 + humidity3) / curNumSensors;
    }

    // Output the corresponding GPIO to control the relays (manual override)
    digitalWrite(fanPin, manualFanState);
    digitalWrite(valvePin, manualValveState);
    
    delay(1000);
  }
  else {
  // Water level sensor in HIGH in air, LOW in water contact
  int bottomWaterLevelState = digitalRead(bottomWaterLevelPin);
  int topWaterLevelState = digitalRead(topWaterLevelPin);

  // Both water level sensors have air in contact (no water)
  if ((bottomWaterLevelState == HIGH) && (topWaterLevelState == HIGH)) {
    valveState = HIGH; // set to HIGH in order to open the valve
    fillToEnd = 0;
  }
  // Other three possible cases (all in which the valve has to be closed/or remain closed):
  // 1. Both water level sensors have water in contact
  // 2. Only top water level sensor have air in contact (no water)
  // 3. Only bottom water level sensor have air in contact (no water)
  else {
    if (fillToEnd == 0){
      if ((bottomWaterLevelState == LOW) && (topWaterLevelState == LOW)){
        fillToEnd = 1;
        valveState = LOW;
      }
    }
    else if (fillToEnd == 1) {
      valveState = LOW; // set to LOW in order to close the valve
    }
  }

  int curNumSensors = sensor1OnOFF + sensor2OnOFF + sensor3OnOFF;
  // Averaging the temperature and humidity data (from three sensors)
  if (curNumSensors == 0) {
    avgTemperature = 0;
    avgHumidity = 0;
  }
  else {
    avgTemperature = (temperature1 + temperature2 + temperature3) / curNumSensors;
    avgHumidity = (humidity1 + humidity2 + humidity3) / curNumSensors;
  }

  // Target humidity range min-max
  float minHumidity;
  float maxHumidity;

  // Compare the average temperature obtained from the sensors (assumed to be indoor)
  // Considering the average indoor temperature (range where human feels the most comfort) is 20~22'C 
  // Higher the temperature, air can hold more moisture without having issues such as mold
  // Thus, if the average temperature is above 22'C, adjust the min-max Humidity target so that instead of 30-50% rH boundary, humidifier now targets 40-50 rH boundary
  if (avgTemperature > 22) {
    minHumidity = 42.5;
    maxHumidity = 50;
  }
  // Else if the average temperature is below 20'C, adjust the min-max Humidity target so that instead of 30-50% rH boundary, humidifier now targets 30-40 rH boundary
  else if (avgTemperature < 20) {
    minHumidity = 42.5;
    maxHumidity = 40;
  }
  // If the average temperature is in between 20~22'C, target base 30-50 rH boundary
  else {
    minHumidity = 35;
    maxHumidity = 50;
  }

  if (avgHumidity > maxHumidity) {
    fanState = LOW; // set to LOW in order to stop the fan
  }
  else if (avgHumidity < minHumidity) {
    fanState = HIGH; // set to HIGH in order to run the fan
  }
  // Average Humidity is in between the min-max target range
  else {
    if (fanState == HIGH) {
      fanState = HIGH; // keep running the fan until humidity goes above the max target
    }
    else if (fanState == LOW) {
      fanState = LOW; // kept the fan off until humidity goes below the min target
    }
  }

  // Print current average Temperature and Humidity for debugging purpose
  Serial.print("Current Avg. Temperature: ");
  Serial.print(avgTemperature);
  Serial.print(" 'C (Sensor#1: ");
  Serial.print(temperature1);
  Serial.print(", Sensor#2: ");
  Serial.print(temperature2);
  Serial.print(", Sensor#3: ");
  Serial.print(temperature3);
  Serial.println(")");

  Serial.print("Current Avg. Humidity: ");
  Serial.print(avgHumidity);
  Serial.print("% rH  (Sensor#1: ");
  Serial.print(humidity1);
  Serial.print(", Sensor#2: ");
  Serial.print(humidity2);
  Serial.print(", Sensor#3: ");
  Serial.print(humidity3);
  Serial.println(")");
  Serial.println("");

  // Output the corresponding GPIO to control the relays
  digitalWrite(fanPin, fanState);
  digitalWrite(valvePin, valveState);
  
  delay(1000);
  }
}
