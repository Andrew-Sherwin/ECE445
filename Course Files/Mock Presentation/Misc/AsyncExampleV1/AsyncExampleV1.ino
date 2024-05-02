#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <WiFi.h>

const char* ssid = "Illinois";
const char* password = "";
const char* ap_ssid = "ESP32-Access-Point";
const char* ap_password = "123456789";
const int LEDA = 2; // GPIO2 pin
const int INPUT_LEDA = 4; // GPIO4 pin for input Switch
const int LEDB = 5; // GPIO5 pin
AsyncWebServer server(80);

bool wifiConnected = false;

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f2f2f2;
    }
    .container {
      max-width: 600px;
      margin: 0 auto;
      padding: 20px;
      background-color: #fff;
      border-radius: 10px;
      box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
    }
    h1 {
      text-align: center;
      color: #333;
    }
    .led-container {
      text-align: center;
      margin-bottom: 20px;
    }
    .led-label {
      font-size: 18px;
      color: #555;
    }
    .led {
      width: 50px;
      height: 50px;
      border-radius: 50%;
      background-color: grey; /* Default color */
      display: inline-block;
      margin-right: 10px;
    }
    .led.on {
      background-color: green; /* Green when ON */
    }
    .led.off {
      background-color: #444; /* Dark gray when OFF */
    }
    .button-container {
      text-align: center;
    }
    .button {
      padding: 10px 20px;
      font-size: 16px;
      color: white;
      border: none;
      border-radius: 5px;
      cursor: pointer;
    }
    .button.on {
      background-color: #4CAF50; /* Green when ON */
    }
    .button.off {
      background-color: #555; /* Dark gray when OFF */
    }
  </style>
</head>
<body>

<div class="container">
  <h1>ESP32 Web Control</h1>
  
  <div class="led-container">
    <span class="led-label">LED A (GPIO 2):</span>
    <div class="led" id="ledA"></div>
  </div>
  
  <div class="button-container">
    <button class="button" id="ledButton" onclick="toggleLED()">Toggle LED B (GPIO 5)</button>
  </div>
  
  <script>
    setInterval(function() {
      fetch('/status')
        .then(response => response.text())
        .then(data => {
          var ledA = document.getElementById('ledA');
          if (data === 'HIGH') {
            ledA.classList.remove('off');
            ledA.classList.add('on');
          } else {
            ledA.classList.remove('on');
            ledA.classList.add('off');
          }
        });
    }, 1000);

    function toggleLED() {
      fetch('/toggle')
        .then(response => response.text())
        .then(data => {
          var button = document.getElementById('ledButton');
          button.innerText = 'Toggle LED B (GPIO 5)';
          button.classList.remove('on');
          button.classList.remove('off');
          if (data === 'ON') {
            button.innerText = 'LED B (GPIO 5) is ON';
            button.classList.add('on');
          } else {
            button.innerText = 'LED B (GPIO 5) is OFF';
            button.classList.add('off');
          }
        });
    }
  </script>
</div>

</body>
</html>
)rawliteral";

void setup() {
  Serial.begin(115200);
  pinMode(INPUT_LEDA, INPUT_PULLDOWN);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);

  // Try to connect to Wi-Fi
  WiFi.begin(ssid, password);
  unsigned long wifiStartTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - wifiStartTime < 20000) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  if (WiFi.status() == WL_CONNECTED) {
    wifiConnected = true;
    Serial.println("Connected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());

    // Route for root / web page
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
      request->send_P(200, "text/html", index_html);
    });

    // Route to toggle the status of LEDB
    server.on("/toggle", HTTP_GET, [](AsyncWebServerRequest *request){
      digitalWrite(LEDB, !digitalRead(LEDB)); // Toggle LEDB
      String status = digitalRead(LEDB) ? "ON" : "OFF";
      request->send(200, "text/plain", status);
    });

    // Route to get the status of LEDA
    server.on("/status", HTTP_GET, [](AsyncWebServerRequest *request){
      String status = digitalRead(LEDA) ? "HIGH" : "LOW";
      request->send(200, "text/plain", status);
    });






    // Start server AP Mode
    server.begin();
  } else {
    Serial.println("Failed to connect to WiFi, starting AP mode...");
    WiFi.softAP(ap_ssid, ap_password);

    IPAddress IP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(IP);

    // Route for root / web page
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
      request->send_P(200, "text/html", index_html);
    });

    // Route to toggle the status of LEDB
    server.on("/toggle", HTTP_GET, [](AsyncWebServerRequest *request){
      digitalWrite(LEDB, !digitalRead(LEDB)); // Toggle LEDB
      String status = digitalRead(LEDB) ? "ON" : "OFF";
      request->send(200, "text/plain", status);
    });

    // Route to get the status of LEDA
    server.on("/status", HTTP_GET, [](AsyncWebServerRequest *request){
      String status = digitalRead(LEDA) ? "HIGH" : "LOW";
      request->send(200, "text/plain", status);
    });

    // Start server in AP mode
    server.begin();
  }
}

void loop() {
  // Check switch state and control LEDA
  if (wifiConnected) {
    if (digitalRead(INPUT_LEDA) == HIGH) {
      digitalWrite(LEDA, HIGH); // Turn on LEDA
    } else {
      digitalWrite(LEDA, LOW); // Turn off LEDA
    }
  }

  delay(100); // Add a small delay for stability
}
