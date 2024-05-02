**Tuesday, February 06, 2024**

![A notebook with writing on it Description automatically
generated](./myMediaFolder/media/image1.jpeg){width="6.361111111111111in"
height="8.481481846019248in"}

**Wednesday, February 07, 2024**

Today, we talked to the machine shop. Prior to going, I made a
PowerPoint describing what we wanted to do. In the PowerPoint, I
included some images, such as a visual aid, and images of parts that we
may use.

In the machine shop, Gregg told us that they will not build a new
humidifier for us. However, they will be happy to modify one from
Amazon. He suggests that we get one that is simple, with a manual on-off
function. Also, it is preferred that it is square, so that it will be
easier to mount things without leaks.

![A notebook with writing on it Description automatically
generated](./myMediaFolder/media/image2.jpeg){width="6.5in"
height="8.666666666666666in"}**\
**

**Thursday, February 08, 2024**

![A notebook with writing on it Description automatically
generated](./myMediaFolder/media/image3.jpeg){width="8.36111111111111in"
height="6.270833333333333in"}

**Wednesday, February 14, 2024**

**Objective: Meeting with Surya, discuss machine shop, discuss using
GitHub for journal**

Today we had a meeting with Surya. We went over our meeting with the
machine shop. I told Surya that we are not able to have a rotating head
as originally proposed. The reason is that the machine shop does not
want to build a humidifier ground up for us. Also, the machine shop just
wants to modify a humidifier to fit our needs. Surya told us to think of
another high level to fill in for the rotating head. We said that we may
do automatic water refilling. Surya also reminded us to sign up for the
design review, which is opening on Friday.

I also asked Surya if, instead of writing physically on a journal, I can
change to GitHub. He says yes, and to make sure to submit the journal at
the end of the semester.

**Thursday, February 15, 2024**

**Objective: Pick part with Jalen, what sensor and ESP32 to use**

I worked to Jalen picking out parts for our project. We needed to figure
out what water level sensor to use and what humidity sensor to use. We
did a lot of research to see what sensors met our needs in price and in
function. Also, we had to decide on what microcontroller we should use.
There are many versions of the ESP32, and we need to decide on one.

After doing research, we are leaning on using the ESP32-S3-WROOM-1-N8.
The reason for this is because we don't need the extra DRAM from other
versions, and the S3 has a UART-USB chip.

**Friday, February 16, 2024**

**Objective: Text Surya about buying ESP32 board**

Today, I texted Surya about ordering a development board. He says that
there are some ESP32 development boards that we can check out in ECE445.
He will get back to me about it next week. I told Surya that we will
check it out in our meeting next week.

**Tuesday, February 20, 2024**

**Objective: Meet with Surya, discuss proposal, place order for sensor,
rent ESP32 Dev Board**

Today we met with Surya. We talked about our progress with the project
and the due dates coming up. Surya told us about our scores for our
proposal report. It was a bit low, but he says we can still make changes
to it and submit it on Friday. He says that the other TA who graded the
paper was strict about the scores. We were missing some requirements,
which we will update. He also told us to look at CHARM's paper. We
originally did that too, but this time we will also reference the
rubric. We will continue working on the project. We told Surya we are in
the process of picking parts for the project.

We told Surya that our new high level will be to read the water level
and automatically fill the water tank.

Today, we also placed the order for our water level sensor. We chose the
Optomax Digital Liquid Level Sensor as it seems easy to work with and is
well waterproofed. The only downside is that it is \$24.99. We only
ordered one to make sure it works.

Aside from that, we borrowed 4 ESP32-S3 development boards from ECE445.
Surya helped sign it out for us. Jason asked why we needed so many
boards. We told Surya that I needed two to work on two ESP32's
communicating over Wi-Fi. Jalen needs one to work on the water level
sensor and motor controller. Woojin needs one for the humidity sensor.

**Wednesday, February 21, 2024**

**Objective: Write design document, make table for parts and labor**

We worked on our design document today. Woojin, Jalen, and I had a Zoom
call. We worked on the paper together. We wonder why this class takes so
much time on the writing. It is more than 4 credit hours. We were able
to transfer a lot of our paper from the proposal over to the design
document. We also made an estimated labor table, as well as the
estimated parts list as shown below:

![A screenshot of a spreadsheet Description automatically
generated](./myMediaFolder/media/image4.png){width="6.5in"
height="2.4618055555555554in"}

**Friday, February 23, 2024**

**Objective: Update proposal and rebsubmit**

Today, I worked on updating the proposal. I updated the block diagram on
the proposal as well and the citations.

Later in the day, I started working on the PowerPoint for the design
review on Wednesday next week.

**Monday, February 26, 2024**

**Objective: Ask Surya if schematics are needed for design review**

Today, I texted Surya if we needed schematic diagrams on our
presentation. He says that we do not. So, I did not make any edits to
our presentation.

**Wednesday, February 28, 2024**

**Objective: Present design review, meet Surya.**

Today, we the design review. There was no meeting for this week. Thanks
for Surya, we dressed up for the design review and came prepared for the
presentation. Professor Schuh did not ask us many questions. The only
suggestions that he had were to include temperature in the algorithm for
the humidifier, update the block diagram, and looks at built in
humidifiers in houses for inspiration. Surya says that we were the first
team to get full marks on the professionalism category.

![A chat message with text Description automatically generated with
medium confidence](./myMediaFolder/media/image5.png){width="6.5in"
height="2.013888888888889in"}

We went to a peer review, and they just read off their Google Doc. I am
glad we make a PowerPoint.

I also made some edits to the block diagram. I updated the signals for
the DC motor controller, as the ones in the proposal did not make sense.
I also made the data and power lines more readable with new colors
added.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image6.png){width="6.5in"
height="5.455555555555556in"}

**Sunday, March 03, 2024**

**Objective: Work on PCB for sensor subsystem**

Today, I began working on the PCB schematic for the sensor subsystem.
Yesterday, Woojin showed me his completed work on the Adafruit SHT45
development board. He showed me the output and proved that the ESP32 can
communicate with the SHT45 and read data from it.

Because we want to make it to the first PCB order group (coming
Tuesday), I will make a draft of the PCB schematic today.

The first thing that I did was find the ESP32-S3 microcontroller on our
ESP32-S3 development board. Doing some research, I believe that it is
the ESP32-S3-VROOM-1-N8. I downloaded the CAD file on Digikey, so that I
can import it to KiCAD.

Next, I looked at the SHT45 sensor. I went on Sensirion's website and
looked through the documentation. They had a sample circuit. I think I
will base my schematic on that, as the Adafruit development board has a
lot of "fluff" on it. I also downloaded a CAD model on Digikey for the
SHT45 sensor. I will be using the SHT45-AD1B-R3 sensor.

![A diagram of a device Description automatically
generated](./myMediaFolder/media/image7.png){width="6.055555555555555in"
height="2.6829199475065617in"}

Aside from the two components mentioned above, we also need the power
components. I will be using a fixed 3.3V voltage regulator that accepts
up to 18V input. Looking through the documentation, I decided to choose
the LDL1117S33R chip.

For the voltage input, I will be inputting 12V via a barrel jack to the
PCB board. The input will be from a WSU 120-2000 AC/DC wall mount. The
barrel jack will be a PJ-202AH jack.

We will also have decoupling capacitors throughout the circuit for the
signals.

There are some issues with the voltage regulator on KiCAD. The reason is
that there are two 3.3V output pins. It is not exactly passing the
Inspection Test. If it still does not work, I will simply change to a
different voltage regulator.

Aside from that, I still need to wire the BOOT and RESET buttons, as
well as the USB bridge.

I found a good link from Espressif regarding wiring the ESP32. It has
the USB-UART and USB-Bridge wiring too, as well as the buttons. It is
the same ESP32-S3-Devkit-C board with the VROOM-1. I was going to do the
USB-UART, but looking at the schematic, it looks like it has too many
components, and is difficult. I will probably figure out how to program
the USB-Bridge instead.

**Monday, March 4, 2024**

**Objective: Work on PCB and improve yesterday's design**

Today, I will continue working on the PCB design. I will working on the
micro-usb-b part.

Looking at the Espressif schematic, I can see that the micro usb
provides a 5V connection. We will not be using the 5V, therefore, I will
be omitting that. I am following the Espressif schematic below to do
most of the PCB schematic. I hope to use the same parts also, even
though they may be from China.

I am getting some errors for the ESP32 footprint. There are some
through-holes in the middle of the chip. Talking to Peter, a friend from
ECE395, he says that they are for heat dissipation. I can ignore it or
remove the holes in the footprint editor. For the first revision of this
board, I will remove it. This is the prevent extra costs. I will talk to
Jason about the holes.

I have finished the prototype. I have submitted the board to PCB-Way,
and it passed all tests and is ready for production.

**Tuesday, March 5, 2024**

**Objective: Turn in PCB design, meet Surya.**

Early today, I finished the schematic and PCB layout. I will review it
with Jalen this afternoon before we email the file to Surya.

During the meeting with Jalen, we did not find any issues with the
schematic. Everything looks ok.

I have sent the email to Surya.

In the meeting with Surya, we also told him our plan for Spring Break.
We hope to finish the humidifier subsystem's PCB over Spring Break.
Surya says he is quite happy with our progress on our PCB when compared
to the other groups.

Order some parts for PCB, primarily BJT and Diode from China. It will
take two weeks to arrive, so it will arrive on time after Spring Break.

**Monday, March 18, 2024**

**Objective: Work on Humidifier PCB, talk to Jalen**

Today, I am working with Jalen on the humidifier PCB. We have previous
communicated on what needs to be done. Right now, my first problem is
converting my KiCAD 8.0 file t0 KiCAD 7.0. The reason is because KiCAD
8.0 is less than a month old, and it has [a lot]{.underline} of bugs.

I tried finding ways to directly convert the files, and it seems like it
is not possible. Also, the symbol and footprint library has already been
converted to KiCAD 8.0 version. So, I will have to re-import all the
symbols and footprints again. This will be a bit tedious. I think I will
have to redraw the schematic and PCB again.

After redrawing the circuit from the sensor subsystem, I fixed any
errors.

Next, I helped Jalen with the relay. He said that we needed an
optocoupler. This is used to prevent noise. I did some research and
decided "why not". It was a bit difficult finding parts for the
optocoupler, as we were not sure what to look for. Furthermore, most of
the parts on Digikey that we clicked on did not have EDA files. I ended
up going to SnapEDA and searching for optocoupler and clicking the first
item. The first was the VOM617AT. The specs looked ok, and it had a
stock of over 6000 on Digikey, so it must be decent. I suggested it to
Jalen. He thinks we should try it out.

![A diagram of a circuit Description automatically
generated](./myMediaFolder/media/image8.png){width="5.152777777777778in"
height="2.75in"}

After more discussion, it seems like Jalen's initial understanding of
what the relay does was flawed. He thought that the relay also provided
power for the ESP32. However, it is the ESP32 that powers the relay. The
120V on the end of the relay does not go to the low power side.

We will be using a premade transformer to power the ESP32. We decided
that it was not worth the time and trouble to make one. We will be using
the EPS-15-12 120V AC to 12V DC transformer. I will also connect the DC
end to a barrel jack for the PCB.

![A table with numbers and symbols Description automatically
generated](./myMediaFolder/media/image9.png){width="6.5in"
height="2.2006944444444443in"}

Order some more parts from Digikey for the humidifier PCB. Total was
around \$67.00.

**Tuesday, March 19, 2024**

**Objective: Work on humidifier PCB, turn in PCB, meet Surya, discuss
water valve**

Today, when talking to Jalen about the water valve, we discovered that
our water valve might not work for the demonstration. The problem is
that the water valve requires a minimum pressure for it to activate. It
does not work by gravitational water pressure. We will have to find a
different valve that has no pressure rating.

We found a new valve on Amazon that require little to no pressure to
work. The downside is that this controller uses quick connect. Also, we
don't know how much pressure will be during the demo.

This new valve requires 12V DC to power. Originally, we were going to
use some kind of motor controller to control it. However, it occurred to
me that the relay could use 12V DC. This will be perfect for the ESP32
sending 3.3V activation signal, activating the switch, and sending 12V
to the motor.

The only uncertain thing is how does the valve close. Looking at the
description, it seems like the valve will close on its own. We will try
it out later.

When meeting with Surya today, we told him about our progress. He told
us that we should start talking to the machine shop. I told him that I
will do it this week. He says that the machine shop should be working on
our parts now. However, he is still happy that we are making good
progress compared to the other teams.

I told Jalen to help create a spreadsheet of the parts that we have
ordered and the parts that we need to still order. The spreadsheet
should have a total of parts needed for each PCB. Also, the list should
have vendor links of where the parts are from.

![A screenshot of a spreadsheet Description automatically
generated](./myMediaFolder/media/image10.png){width="6.416666666666667in"
height="4.375in"}

I updated the block diagram once more. This time, the block diagram has
electrical relays instead of the motor controller. This is because I
think the design will be more modular. When changing this, I also
updated the GPIO lines. The idea behind the relays is when the switch is
activated, the circuit for the water valve and the humidifier will be
complete. As a result, they turn on.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image11.png){width="6.5in"
height="5.469444444444444in"}

**Thursday, March 21, 2024**

**Objective: Talk to machine shop**

Today, I brought the humidifier and PCB parts to the machine shop. I
also drew some diagrams to show the machine shop what needs to be done.

![A white paper with blue writing on it Description automatically
generated](./myMediaFolder/media/image12.jpeg){width="6.5in"
height="4.875in"}

![A white paper with blue writing on it Description automatically
generated](./myMediaFolder/media/image13.jpeg){width="6.5in"
height="4.875in"}

I think that Gregg understands the idea. However, because we are still
waiting for parts, he cannot begin working on it yet. Gregg requested
that I give him a sample of our PCB and the water valve. He says he will
be on vacation for a week starting the coming Monday. I told him I will
get it to him tomorrow, as the valve is arriving tomorrow.

Jalen and I continued to work on the parts list. Below is the updated
list. It consists of parts for the sensor and the humidifier subsystem:

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image14.png){width="6.5in"
height="2.515972222222222in"}

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image15.png){width="6.5in"
height="3.154861111111111in"}

**Friday, March 22, 2024**

**Objective: Parts did not arrive**

The valve did not arrive today yet. I think some motherfucker stole my
package. I went to see Gregg to report the bad news, and apparently, he
had already left for his vacation!?

**Sunday, March 24, 2024**

**Objective: Woojin got ESP32s to send data**

Today, Woojin announced that he got the communication between two ESP32s
to work. The original plan was to control the LED of one ESP32 from
another ESP32 over 2.4GHz Wi-Fi. However, Woojin went above and beyond
by being able to send the SHT45's data to another ESP32 and being able
to read it.

**Monday, March 25, 2024**

**Objective: Order parts from funding**

Order parts for humidifier subsystem. I think that this will be the last
order from the \$150.00 budget that we have. This order is mainly UART
chips and plugs for the transformer that we missed.

**Tuesday, March 26, 2024**

**Objective: Meet Surya, test water valve**

Today, the water valve arrived. I tried to test it. However, initially,
I was confused on how it works. I can hear it clicking, but looking in
the hole, I did not see the valve opening. As a result, I took it apart
and found the below:

![A small white and blue device Description automatically
generated](./myMediaFolder/media/image16.jpeg){width="5.536082677165354in"
height="7.381443569553806in"}

As seen in the picture, this is not really a valve, but a plunger. It
works with a coil. When there is a current through the coil, a magnetic
field will be created and the valve will be sucked upwards, thus opening
the valve. The valve is normally closed when there is no current going
to it. The manufacture's specification says that it draws around 4.8W.
This means that there is 0.4 amps flowing through it.

$$4.8W = I*12V$$

$$I = 0.2A$$

This should be enough for our applications. The only worry is that the
seal might not be great. However, since our real valve will not be like
this, as this is an "unpressured valve", it will not be a real problem.

We met with Surya; I told him to good news about Woojin getting the
sensors to send data over Wi-Fi. Surya tells us to contact the machine
shop to see how progress is. Surprisingly, we still have around \$30 of
budget left. We may use it to order our second water level sensor.

**Wednesday, March 27, 2024**

**Objective: Order parts for humidifier, determine power input for
humidifier subsystem**

Today I had to order some parts for the humidifier subsystem. I had to
figure out a way to power the PCB, and I thought that the best way would
be to use a switching regulator. I thought about making our own power
supply, however, with the limited cost and time, I think it would be too
difficult. Also, it is highly unlikely that we can build one for cheaper
than buying one at around \$6.00. Furthermore, the pre-built ones have
surge protection built in, and this is important for voltage spikes. We
will not be sure if our own design can protect against this, and it is
too risky frying all the other components.

We only need a 12V input in our humidifier subsystem. As a result, over
multiple hours of research, I decided on the ESP-15-12 AC/DC converter.
This can provide a 12V DC output with a 1.25A current output. I estimate
that this should be enough for the PCB and the water valve. Looking at
the diagram below, I will also need to buy some plugs for the input and
output.

![A diagram of a circuit board Description automatically
generated](./myMediaFolder/media/image17.png){width="6.5in"
height="4.848611111111111in"}

I was able to find some suggested ones on Digikey with a crimp
connection. I hope that this will work.

Aside from that, I also must think about a way to send the 120V AC into
the subsystem, and a way to power the humidifier. I did not want to make
any difficult changes to the humidifier's fan. As a result, I came up
with the idea below:

There would be a box. There will be an input power into the box through
a wire. This wire can be unplugged anytime. This leads to the
portability of the box. There will be a the 12V AC/DC converter in the
box. This converter will go feed the PCB and other components.

Along with the AC/DC converter, I bought a couple varying parts for the
idea above. This was in Digikey order: 860944423.

Aside from that, I also ordered a relay development board from Digikey.
This was part number 1528-1738-ND. I wanted Woojin to start working on
developing the GPIO functionality as soon as possible.

Finally, we paid for 2 day shipping on the order, so that it can get
here by the weekend.

We also used our remaining budget by ordering another Optomax Digital
Liquid Level Sensor. This will use up all our remaining budget.

**Friday, March 29, 2024**

**Objective: Solder relay dev-board**

Today, the parts and the relay arrived. I could not really do anything
with the parts, as the machine shop still needs to work on the project.
We will need to talk to them soon. The development board for the PCB
seems pretty compact, so our PCB will also be compact.

![A small black electronic device on a silver surface Description
automatically
generated](./myMediaFolder/media/image18.jpeg){width="5.273611111111111in"
height="7.031481846019248in"}

**\
**

**Saturday, March 30, 2024**

**Objective: Solder PCB for sensor subsystem**

Today, Jalen and I started soldering the humidity sensor PCB. However,
we discovered that we were still missing some SMD components from the
ECE Electronics Supply Shop. I immediately sent an email to Surya so
that we can get some. However, since we were already at ECEB, Jalen and
I laid the paste and soldered with the parts we have on hand. We took a
while, as I was teaching Jalen how to lay the parts on the PCB. But we
were finished.

The ESP32 was a little bit hard to solder. The ground pads were hard to
heat up. Maybe the iron was not powerful enough. We will finish
soldering in another day when the parts arrive.

![A person looking through a microscope Description automatically
generated](./myMediaFolder/media/image19.jpeg){width="4.714285870516186in"
height="6.285714129483814in"}

**Monday, April 1, 2024**

Jalen and I update the parts list one more time. This time, we color
coded where parts are from and did final adjustments to the quantity.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image20.png){width="6.5in"
height="1.85625in"}

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image21.png){width="6.5in"
height="2.5375in"}

**Tuesday, April 2, 2024**

**Objective: Meet Surya, show Surya our PCB, address issues with PCB**

Meeting with Surya today, we told him that we will be working on our PCB
ASAP since parts are here. Surya also asked us to check in with the
machine shop, and we told him that the machine shop is working on our
parts, but there is delay. However, the machine shop did tell us to not
worry.

Tonight, Jalen and I worked on soldering the rest of the first sensor
subsystem PCB. It turned out to be a bad idea to not do all the
soldering at once, as we had to remove all the old solder off the pads
before laying new paste.

After fixing some bridging in certain parts of the chip, we were able to
plug the PCB into our 12V wall power supply. This 12V was from my
previous class in Fall 2023. We were able to program a basic program to
the ESP32.

However, when I tried to program a sample Wi-Fi access point code to the
ESP32, the ESP32 initially worked then started crashing. The symptom is
that, on the serial monitor, it would show that it was connecting and
disconnecting. Also, the voltage regulator and the surrounding
capacitors got really hot. In fact, it got so hot that it was
uncomfortable to the touch. Ultimately, the voltage regulator fried
itself and stopped outputting 3.3V. Thankfully, it output 1.5V, so it
did not fry the ESP32.

We think that the regulator might be defective, so we changed it for
another one. Though the new one did not fry itself, it still had the
issue where the ESP32 would keep connecting and disconnecting.

It was 3-4am, so we decided to go home and solve it the next day.

![A person sitting in a chair in a room with a desk and a robot
Description automatically
generated](./myMediaFolder/media/image22.jpeg){width="5.913580489938758in"
height="7.884771434820648in"}

**\
**

**Wednesday, April 3, 2024**

**Objective: Debug PCB, why it is constantly restarting**

I started a Reddit post on r/ESP32 to ask why I was experiencing this
problem.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image23.png){width="6.5in"
height="4.189583333333333in"}

I did some research on why this might be. There are similar symptoms
online. It seems like the reason for this is because the Wi-Fi module on
the ESP32 draws a lot of current. As a result, the power draw through
the voltage regulator is high. Maybe with a better power supply, the
ESP32 will not "throttle".

![A white electronic device with a screen and buttons Description
automatically
generated](./myMediaFolder/media/image24.jpeg){width="6.5in"
height="4.875in"}

A Reddit user suggested using the power supply from the lab bench and
using a lower voltage. The reason is with a high voltage difference in
the input and output of the linear voltage regulator, the difference is
dissipated as heat.

As a result, I first tested the bench power supply at 12V. It still had
the throttling issue, even though enough current was supplied. Next, I
started decreasing the voltage by 1V increments. I noticed that starting
at 8.0V and below, the ESP32 would no longer throttle. This means that
we should figure out a way to decrease the voltage supply.

I talked to Stephen Messing, a PhD student from the Laser Optics Physics
Laboratory research group (Andrey Mironov and Gary Eden), and he
suggested putting linear voltage regulators in series, with increment
decreases in voltage. This will decrease the voltage drop and balance
out the power draw through each regulator.

![A person standing next to a whiteboard Description automatically
generated](./myMediaFolder/media/image25.jpeg){width="6.5in"
height="4.875in"}

Ultimately, I decided to use a 5V wall plug the power the sensor
subsystem, and a RS-15-5 AC/DC converter to power the humidifier
subsystem's PCB. I also bought a new AC/DC converter. Instead of the
previous one, this one has an isolation case. Also, the inputs and
outputs are screws. This makes it easier to wire.

**Thursday, April 4, 2024**

**Objective: Draw diagram so Woojin can understand, solder humidifier
subsystem PCB**

In ECE343's lab, I drew this diagram detailing the idea behind the
humidifier subsystem.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image26.jpeg){width="6.5in"
height="4.508333333333334in"}

The diagram above shows the inputs and how the different components will
be powered. I hope that this will help Woojin understand how everything
goes together better.

Later that night, I took the burden upon myself to solder the PCB for
the humidifier subsystem. Jalen said he can help on Saturday, but that
is already too late. This is because I may need to order parts on
Friday.

**Friday, April 5, 2024**

**Objective: Solder PCB for humidifier subsystem, debug PCB**

I finished the PCB early Friday morning. I just soldered one relay and
one water level sensor input.

![A green circuit board on a black surface Description automatically
generated](./myMediaFolder/media/image27.jpeg){width="6.5in"
height="4.875in"}

When I programmed it, the PCB works with Wi-Fi with a 5V input. However,
GPIO 19 and 20 were not outputting signals to the relays. I think that
the ESP32 was not soldered on properly. So, I tried to remove the ESP32.
I think I heated the board too hot because there was smoke. Also, upon
inspection, the UART chip had a hole in it and the push buttons were
disintegrated. At 5:40am, I gave up and decided to go home.

When I got home, I also worked on ordering new parts. I ordered a couple
more ESP32s, relays, UART chips, and other various parts that can be
used on the sensor and humidifier subsystems. This is so that we don't
need to wait for parts if we need any.

At night, I went to Home Depot with Taiyuan (Daniel) Hu to get some
parts. I got some 14 gauge Romex wires, 5 input WAGO connectors, 2 input
WAGO connectors, Klein no-contact voltage tester and IR thermometer, and
a Milwaukee wire stripper and crimper.

**Sunday, April 7, 2024**

**Objective: Make revisions for humidifier PCB, improve design on final
round**

Today, I worked on some PCB revisions to the humidifier PCB. Because
Tuesday, April 9, 2024, is the fifth round of PCB orders, we needed a
fail-safe for our humidifier subsystem. I made 5 PCBs. The first order
is another order of our, already working, sensor subsystem. The next is
an order of our humidifier subsystem from the second round. The third
board is the same, but with the GPIOs for the relays moved. The fourth
board is a re-routing of the traces in the third board. The fifth board
contains cutouts for the high voltage. I spent the whole night doing
this and finished early in the morning.

**Monday, April 8, 2024**

**Objective: Talk to machine shop about our project**

Today, I talked with the machine shop. I needed to talk to Gregg about
our project, as he sent us an email saying he came back from vacation.

When I went in to talk to Gregg, it turns out that he was involved in a
car accident in the morning of March 22, 2024. As a result, he was not
able to come back to ECEB. He had a scar on his upper right eyebrow. I
went over the project with him, and he said I should get a call in the
next few days to the end of the week.

**Wednesday April 10, 2024**

**Objective: Meet Surya, talk to him about machine shop, solder
remaining PCBs**

Today we met with Surya. Surya asked how the PCBs were going, and I told
him that we are working on it. After the meeting, Woojin and I decided
to solder the remaining two sensor subsystem boards. I taught Woojin how
to place the components and paste the board with the stencil.

![A person looking through a microscope Description automatically
generated](./myMediaFolder/media/image28.jpeg){width="3.4175251531058617in"
height="4.556700568678915in"}

I did the ESP32 chip, as Woojin does not have experience to do it, and I
don't want him to mess up. We finished early Thursday morning. We tested
the boards with the programs, and they all work on the first try.

![A group of green electronic components on a black surface Description
automatically
generated](./myMediaFolder/media/image29.jpeg){width="6.5in"
height="4.875in"}

**Thursday April 11, 2024**

**Objective: Test humidifier PCB, figure out what is wrong**

Today, I decided to solder the humidifier board with our replenished
parts. The reason why I did not want to wait until Saturday to do it
with Jalen is because there will be no time to buy new parts on Saturday
and have it ship.

I finished soldering the board with just one relay like last time.
However, before soldering the ESP32, I tested the voltage divider from
the water level sensor to make sure it outputs 3.3V to the ESP32.

$$V_{out} = \ V_{in}*\frac{100}{100 + 200}$$

$$V_{out} = 3.333V$$

After the verification with the multimeter, I was comfortable to solder
the ESP32 on.

![A green circuit board with black wires Description automatically
generated](./myMediaFolder/media/image30.jpeg){width="6.5in"
height="4.875in"}

Upon testing the board, I can see that it is fully working. I realized
that the first time that I did it, the board fully works. Maybe it was
late that night, but I got GPIO number, and the pin number confused on
the program.

I also bridged the connection in the through holes. This will avoid the
optocoupler, which did not work. Also, because the ground is shared, the
optocoupler was pointless.

In the day, I went to the machine shop the bring them my new AC/DC
converters with the isolation cage. Also, it was to check in with Gregg
on when they will start working on the project.

Gregg asked around the shop for who was interested and available to work
on our project. He assigned us to Skee Aldrich. I went over the
components with Skee and the functionality. We picked a clear box for
the humidifier subsystem. This was the only box left that can fit the
components. It looks good.

**Friday, April 12, 2024**

**Objective: Work on the box containing humidifier PCB, test input
voltage**

Today, Jalen and I was going to wire the board up. We needed to test the
AC components. At around 15:50, I went to the machine shop to get some
parts for us to use. Skee had already left, but I asked Gregg if I could
borrow the parts. Gregg said sure, but I had to return it Monday morning
at 8:00am. I promised him that I will do it.

With the box, Jalen and I mock-placed the components. ![A close-up of a
device Description automatically
generated](./myMediaFolder/media/image31.jpeg){width="6.5in"
height="4.875in"}

We also tested the functionality of the transformers. We determined that
the 5V transformer was not working, as the adjuster only output 4.2V.

I updated the block diagram again. This time, I am reflecting the
switching regulated supply. There will be two switching regulated
supply. The first one will take in 120V and output 5V, while the other
takes in 120V and outputs 12V.

![A screenshot of a computer Description automatically
generated](./myMediaFolder/media/image32.png){width="6.5in"
height="5.486111111111111in"}

**\
**

**Sunday, April 14, 2024**

**Objective: Resolder second humidifier subsystem PCB with new parts**

Today, I finished up soldering the rest of the humidifier subsystem's
PCB. I added the remaining relay and the water level sensor input. This
was because we have a mock demo on Tuesday. ![A hand holding a green
circuit board Description automatically
generated](./myMediaFolder/media/image33.jpeg){width="5.304124015748031in"
height="7.072165354330709in"}

Tonight, Woojin got the HTML webpage up. Our data can be read on the
website, though a little bit low.

**Monday, April 15, 2024**

**Objective: Give parts to Skee, wire up box**

I went to ECEB at 7:55am to hand the parts to Skee. Gregg was very happy
that I showed up on time in the morning.

Skee finished up the boxes today, so I can work on wiring them up today.
However, he still needed to work on the water tank for us to demo. I
also noticed that he did not make holes for the sensor subsystem boxes.
The holes are for the power cables to go through. I will bring it to him
tomorrow morning.

I spent the night wiring the humidifier box up.

**Tuesday, April 16, 2024**

**Objective: Test enclosure for PCB in the humidifier subsystem, meet
Surya for mock demo**

Early this morning, I finished wiring the whole humidifier subsystem.
Prior to plugging the humidifier in, I used the non-contact voltage
tester to see if there are voltage leakage. There was not, so I plugged
the humidifier in. Using Woojin's webpage, the fan was able to be turned
on and off. I was happy with this result.

![A computer and a phone on a desk Description automatically
generated](./myMediaFolder/media/image34.jpeg){width="6.5in"
height="4.875in"}

In the afternoon, I spent my time wiring the water level sensors and the
wires for the water valve. I bought the parts from the ECE supply store.
I also heat-shrunk the wires. Later in the afternoon, we did a practice
presentation with Surya. Surya told us to clean up the wiring. I will
heat shrink the wiring some more.

![A machine with wires connected to it Description automatically
generated](./myMediaFolder/media/image35.jpeg){width="6.5in"
height="4.875in"}

**Wednesday, April 17, 2024**

**Objective: Heat shrink wires, join some wires**

I cleaned up the wiring a bit with ½ inch heat shrink. However, the heat
shrink was only 6 inches long. As a result, I had to use multiple
sections. The heat shrink was from different manufacturers, so the
colors were different. I was not pleased with the result, so I bought
some marine grade waterproof heat shrink from Amazon. The order will
arrive Friday.

![A hand holding a black wire Description automatically
generated](./myMediaFolder/media/image36.jpeg){width="6.5in"
height="8.666666666666666in"}

**Friday, April 19, 2024 and Saturday, April 20, 2024**

**Objective: Heat shrink wires, test voltage and temperature output,
make tables and graphs**

Lingxian Cai, a friend of mines fried their ESP32, and a new one will
not arrive until Monday. So, I gave our last spare one to him.

With the new 10ft long heat shrink, I worked on heat shrinking the wires
into one. I also planned to connect the water level sensors.

The heat shrink was horrible to get on the wires. The waterproof heat
shrink had a tacky layer inside. As a result, sliding the heat shrink
over the wires was very difficult. It took me 2 hours to get it over our
2.5 feet of wire.

After that, I connected the water level sensors to the wires I just heat
shrunk. Originally, I wanted to crimp the wires, as that allows the
proper connection. It is used in aerospace. However, the crimps were too
large for the heat shrink. As a result, to keep the clean look, I
soldered the wires. I stripped it 2 inches so that the contact surface
will be maximized.

![Close-up of several wires Description automatically
generated](./myMediaFolder/media/image37.jpeg){width="5.511482939632546in"
height="4.133612204724409in"}

After soldering, I did continuity testing to make sure the connections
were good before heat shrinking the connections. ![A black and blue
device with wires Description automatically
generated](./myMediaFolder/media/image38.jpeg){width="6.5in"
height="4.875in"}

The result was very clean. For the water valve wires, I need to go to
the supply store to get two new female connectors, as the original was
damaged when I was pulling the heat shrink over the wires.

Later at night, I worked with Woojin and Jalen on our presentations and
handouts for the demonstration. The demonstration is April 23, 2024, at
9:30am in 2072.

Woojin also worked on verifying the runtime and proving that 44ns is
unrealistic. He also updated the water level sensor algorithm. I
discovered a couple days ago when demonstrating to Surya on the mock
demo that the algorithm did not make sense. Previously, it would only
fill water when both sensors detect no water. However, when the lowest
sensor detects water, it will stop filling. As a result, the water level
will never go to the top sensor. Woojin also made an offset algorithm
for the humidity data and the temperature to compensate for the box
design.

Jalen and I also did our RV table verifications. Below are the graphs of
data that we collected for the voltage input over 1 hour:

![A graph of a graph of a graph of a graph of a graph of a graph of a
graph of a graph of a graph of a graph of a graph of a graph of a graph
of Description automatically
generated](./myMediaFolder/media/image39.png){width="6.5in"
height="2.2098764216972877in"}![A graph of a graph of a graph of a graph
of a graph of a graph of a graph of a graph of a graph of a graph of a
graph of a graph of a graph of Description automatically
generated](./myMediaFolder/media/image40.png){width="6.5in"
height="2.0740737095363078in"}

![A table of numbers with numbers Description automatically
generated](./myMediaFolder/media/image41.png){width="6.5in"
height="5.999305555555556in"}

We were also able to confirm that our three sensor readings matched that
of the commercial humidity and temperature sensor from Amazon.

![A hand holding a phone over a digital device Description automatically
generated](./myMediaFolder/media/image42.jpeg){width="5.19807852143482in"
height="3.5688538932633422in"}

Woojin did the runtime test, and the runtime was 90,000ns for a two way
communication. This is around 45,000ns for SHT45 to the humidifier
subsystem's ESP32. This is because there is a lot of data to pack and
unpack, as well as other delays when running the code. Therefore, we
verified that the 44ns was unrealistic theory.

**Monday, April 22, 2024**

**Objective: Print handout at FedEx, buy parts at Home Depot, finish
wiring**

Today, I printed 4 copies of the handout at FedEx. I printed the copies
using 32g paper for a more professional and premium feel.

I also went to Home Depot again to pick up heat shrink, 0.250 female
connectors for 18-22 gauge wires, and water resistant heat shrink.

At night, we double checked the PowerPoint and did some practice
presentations. Woojin added 8 sources to the bibliography. Woojin needs
more practice on the presentation.

While Woojin left early, Jalen and I finished the water pump's wiring.
We tested everything in the humidifier subsystem and confirmed
everything worked.

**Tuesday, April 23, 2024**

**Objective: Present demonstration**

After going home, I continued to look through the PowerPoint to make
sure everything looks correct. I added descriptions to the photos in the
PowerPoint. I also told Woojin what to say for the 44ns. I made sure all
our verifications were met. I also practiced speaking every slide on the
PowerPoint, so that I know everything.

In the morning, I arrived at ECEB at 8:30. I got the study room across
the ECE411 OH room. I plugged the sensors in and made sure everything
worked. Woojin came in, but Jalen was really late. Luckily, he arrived
on time for the presentation.

The presentation went spectacularly. Professor Schuh and the second TA
were impressed with our project. The professor's face lit up when we
unplugged one sensor, and the average was recomputed with just two
sensors. Surya said in text that we earned 10 points for complexity!

![A screenshot of a chat Description automatically
generated](./myMediaFolder/media/image43.png){width="4.525773184601925in"
height="3.2439523184601926in"}

![A group of men standing in a room Description automatically
generated](./myMediaFolder/media/image44.jpeg){width="6.5in"
height="4.875in"}

**Saturday, April 27, 2024**

**Objective: Prepare for final presentation, 3D scan product**

We met today to work on the final presentation PowerPoint. There was not
a lot of things to add, as our previous PowerPoints already had graphs
and data. We did, however, add schematics of our PCB and added a slide
about the challenges we faced. On top of that, I 3D scanned our
humidifier and the sensors. This will be used on the PowerPoint as a
looping video.

**Monday, April 29, 2024**

**Objective: Present final presentation**

Today was our final presentation. We spoke for 20-21 minutes, so the
timing was very good. However, Professor Schuh asked a very tricky
question at the end of the presentation. We had one bullet point stating
that we can modularize our humidifier by removing the water level
sensors and the water valve. However, Schuh brought up doesn't that
point negate one of our high levels. I did not want to answer his
question directly, so I danced around the question. The reason why I put
the bullet point was because we need to design a new humidifier from the
ground up to have our full working project. However, we do not have the
funding for that.

**Tuesday, April 30, 2024**

**Objective: Work on final report**

Today, we worked on the final report with Woojin and Jalen. Most of our
report was a carry-over from the design document. However, some things
had to be updated, as we are now using relays and 5V as input to the
PCB, for example. We updated our labor table, as seen below:

![A table with numbers and a group of men Description automatically
generated](./myMediaFolder/media/image45.png){width="6.5in"
height="3.026388888888889in"}

We estimated that there are 24 hours of work done by the machine shop.
This is because the machine shop worked on our project for three 8-hour
workdays. We also discussed the total amount of hours we each put in the
project. There were some slight discomforts when discussing the hours
that Woojin spent on work. Though we agreed to put 2 hours and 0.5 hours
for Circuit Design and PCB Design for Woojin, this is just a "show of
face" to Woojin. The reason is that he basically did 0 hours for both of
those two categories. He does not even have the KiCad files on his
computer and is not clear about how the circuit works. He did do
software engineering, but 78 hours is a stretch. The software he wrote
was primarily using libraries and example code. He claimed it took him 5
hours to figure out GPIO signals, but not only did I send him example
code at the beginning of the semester, but GPIO read and write only
takes 15-30 minutes to learn. Woojin did help solder for 5 hours and did
help with troubleshooting. But the amount of work he performed was not
satisfactory, as he was always busy with other classes.

Jalen's hours are accurate, as I worked closely with him all semester.

At the end of the night, we realized that we still had to
cross-reference figures and citations. We decided to finish that the
next day.

**Wednesday, May 1, 2024**

**Objective: Conflict between members on labor table, turn in final
report**

Woojin was not able to make it to help us do the cross-reference, so
Jalen and I worked on it earlier. It took us two hours to finish, and it
was just as I predicted yesterday.

We submitted the paper. However, at 17:30, Woojin called me and asked me
to take down the labor table. He says that while some teams like Fall
2022's CHARM has it, many other teams do not have it. I got the feeling
that he was uncomfortable and embarrassed with the amount of work that
he did. I did not like his idea because that would discredit all the
work that Jalen and I did. Woojin says that we can just include the
total hours, in fact he can even decrease his hours to 145. I told him
to talk to Jalen about it. If Jalen agrees, then I will change it. Jalen
agrees since he did not want to cause trouble, and I updated it to the
table below:

![A black line with black text Description automatically
generated](./myMediaFolder/media/image46.png){width="6.5in"
height="1.0138888888888888in"}

I kept it at 155 hours for Woojin as I feel like it honors his work.
However, Jalen and I are not very satisfied with this. However, I did
push it on the website as we agreed on. I left the first version as
"confidential".

Woojin went on Discord to ask us to remove the original version from the
server. I said I will not do that, as it is already confidential. He
tried calling me, but I ignored his call.

![A screenshot of a chat Description automatically
generated](./myMediaFolder/media/image47.png){width="5.148148512685914in"
height="4.598133202099738in"}

I suggested we do a group call at 22:00 so that he can beat around the
bush and tell us what he really wants.

During the call, I suggested that we make a compromise where Jalen and I
keep our breakdown of hours, but Woojin will have his blanked out. He
also stated that he though 155 hours is too much and should decrease his
software engineering hours to 40 hours. This will make his new total 117
hours. Jalen and I agreed to this. Also, we removed the original
document from the ECE445 page as requested by Woojin. I think Woojin
does not want the public to know what parts he worked on specifically.
Below is the final table:

![A table with numbers and letters Description automatically
generated](./myMediaFolder/media/image48.png){width="6.444444444444445in"
height="3.115054680664917in"}

To upload this Word document to GitHub, I had to find a way to convert
the text to MarkDown, which is GitHub's text file format. I found Pandoc
that can do it for you. By using the command:

"pandoc \--extract-media ./myMediaFolder input.docx -o output.md"

I can export the text and media and push it to GitHub.

**References**

1.  F. Hecht, "Wifi Propagation," *freedom*, 2017.
    https://doc.freefem.org/tutorials/wifiPropagation.html (accessed
    Mar. 29, 2024).

2.  M. Marwell, "Issues with the I^2^C (Inter-IC) Bus and How to Solve
    Them," *DigiKey*, Aug. 09, 2018. Accessed: Mar. 29, 2024.
    \[Online\]. Available:
    https://www.digikey.com/en/articles/issues-with-the-i2c-bus-and-how-to-solve-them

3.  MetaGeek, "Wi-Fi and Non Wi-Fi Interference," *MetaGeek*, 2024.
    https://www.metageek.com/training/resources/wifi-and-non-wifi-interference/
    (accessed Mar. 29, 2024).

4.  A. V. Arundel, E. M. Sterling, J. H. Biggin, and T. D. Sterling,
    "Indirect health effects of relative humidity in indoor
    environments.," *Environmental Health Perspectives*, vol. 65, no.
    65, pp. 351--361, Mar. 1986, doi: 10.1289/ehp.8665351.

5.  V. Perrone *et al.*, "The Epidemiology, Treatment Patterns and
    Economic Burden of Different Phenotypes of Multiple Sclerosis in
    Italy: Relapsing-Remitting Multiple Sclerosis and Secondary
    Progressive Multiple Sclerosis," *Clinical Epidemiology*, vol.
    Volume 14, no. 14, pp. 1327--1337, Nov. 2022, doi:
    10.2147/clep.s376005.

6.  IEEE, "IEEE Code of Ethics," *IEEE Code of Ethics*, 2020.
    https://www.ieee.org/about/corporate/governance/p7-8.html (accessed
    Mar. 29, 2024).

7.  University of Illinois, "Salary Averages," *UIUC*, 2022.
    https://ece.illinois.edu/admissions/why-ece/salary-averages
    (accessed Mar. 29, 2024).

8.  Environmental Protection Agency, "Care for your air: A guide to
    indoor air quality," *US EPA*, Aug. 07, 2023.
    https://www.epa.gov/indoor-air-quality-iaq/care-your-air-guide-indoor-air-quality
    (accessed Mar. 25, 2024).

9.  Sensirion, "Datasheet -SHT4x," *Sensirion*, Aug. 2023.
    https://sensirion.com/media/documents/33FD6951/6555C40E/Sensirion_Datasheet_SHT4x.pdf

10. A. Sherwin, *ECE445 Team 11 - Sensor Subsystem Schematic*. 2024.

11. A. Sherwin, *ECE445 Team 11 - Humidifier Subsystem Schematic*. 2024.

12. Espressif, "ESP32-S3-WROOM-1 ESP32-S3-WROOM-1U
    Datasheet," *Espressif*, 2023.
    https://www.espressif.com/sites/default/files/documentation/esp32-s3-wroom-1_wroom-1u_datasheet_en.pdf

13. IEEE, "IEEE Code of Ethics," *IEEE Code of Ethics*, Jun. 2020.
    https://www.ieee.org/about/corporate/governance/p7-8.html (accessed
    Mar. 26, 2024).

14. Espressif, "sch_esp32-s3-devkitc-1_v1_20210," *Espressif*, Apr.
    13, 2022.
    https://dl.espressif.com/dl/schematics/SCH_ESP32-S3-DevKitC-1_V1.1_20220413.pdf
    (accessed Mar. 26, 2024).

15. A. Sherwin, *Sensor Subsystem Block Diagram (Close-Up)*. 2024.

16. A. Sherwin, Humidity Subsystem Block Diagram (Close-Up). 2024.

17. D. Workshop, "ESP NOW - Peer to Peer ESP32 Communications," DroneBot
    Workshop, Apr. 03, 2022. https://dronebotworkshop.com/esp-now/

18. K. Rembor, "Adafruit Sensirion SHT40, SHT41 & SHT45 Temperature &
    Humidity Sensors," Adafruit Learning System, Feb. 04, 2021.
    https://learn.adafruit.com/adafruit-sht40-temperature-humidity-sensor/arduino

19. cplusplus, "std::chrono::high_resolution_clock::now," cplusplus.
    https://cplusplus.com/reference/chrono/high_resolution_clock/now/
    (accessed Apr. 20, 2024).

20. cplusplus, "std::chrono::nanoseconds," cplusplus.
    https://cplusplus.com/reference/chrono/nanoseconds/ (accessed Apr.
    20, 2024).

21. me-no-dev, "ESPAsyncWebServer/README.md at master ·
    me-no-dev/ESPAsyncWebServer," GitHub.
    https://github.com/me-no-dev/ESPAsyncWebServer/blob/master/README.md

22. Tea, "ESP32 Web Server periodic updating problem," Stack Overflow.
    https://stackoverflow.com/questions/64610221/esp32-web-server-periodic-updating-problem

23. antepher, "ESP32 Arduino: HTTP server over soft AP," techtutorialsx,
    Jan. 07, 2018.
    https://techtutorialsx.com/2018/01/07/esp32-arduino-http-server-over-soft-ap/

24. ESPRESSIF, "ESP-NOW - ESP32 - --- ESP-IDF Programming Guide v5.2.1
    documentation," espressif.com.
    https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/network/esp_now.html

25. Center for Drug Evaluation and Research, "Use Caution When Giving
    Cough and Cold Products to Kids," *U.S. Food and Drug
    Administration*, 2018.
    <https://www.fda.gov/drugs/special-features/use-caution-when-giving-cough-and-cold-products-kids>
    (accessed May 01, 2024).

26. A. Sherwin, Consumer Visual Aid. 2024.

27. A. Sherwin, Component Visual Aid. 2024.

28. A. Sherwin, Overall Block Diagram. 2024.

29. A. Sherwin, Humidity Subsystem PCB. 2024.

30. A. Sherwin, Webserver Webpage. 2024.

31. A. Sherwin, Sensor Subsystem PCB. 2024.

32. A. Sherwin, RV Table A-1. 2024.

33. A. Sherwin, RV Table A-2. 2024.

34. A. Sherwin, RV Table A-3. 2024.

35. A. Sherwin, RV Table A-4. 2024.

36. A. Sherwin, RV Table A-5. 2024.

37. A. Sherwin, RV Table A-6. 2024.

38. A. Sherwin, RV Table A-7. 2024.

39. A. Sherwin, RV Table A-8. 2024.

40. A. Sherwin, RV Table A-9. 2024.

41. A. Sherwin, RV Table A-10. 2024.

42. A. Sherwin, RV Table A-11. 2024.

43. A. Sherwin, RV Table A-12. 2024.

44. A. Sherwin, Sensor Subsystem Parts. 2024.

45. A. Sherwin, Humidifier Subsystem Parts. 2024.

46. A. Sherwin, Estimated Development Hours. 2024.

47. A. Sherwin, Total Cost. 2024.

48. Engineering IT Shared Services, "Lab :: ECE 445," *Senior Design
    Laboratory*, 2020.
    https://courses.engr.illinois.edu/ece445/lab/index.asp (accessed May
    01, 2024).
