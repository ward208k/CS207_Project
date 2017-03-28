# The Dance Dance Robot V0.1
============
Project repository for CS 207, winter 2017

# Repository Contents
============
Here is a list of all the contents of this project:

* **/hardware** - All the design files and circuit diagrams.
* **/images** - Where all the images are stored.
* **/results** - All the test videos and results.
* **/build** - The completed arduino files.
* **/README.md** - The README file.

# Requirements and Materials
============

Currently this project only requires a few parts and a micro controller.
This will need more parts as it progresses however.
So this section will be updated often.

Dependencies:
* None Yet  ( ._.)

Bill of Materials for V1.0:
* 4 x Push Buttons
* 4 x LEDs (any color)
* 4 x 560 Ω resistor
* 4 x 10k Ω resistor
* 1 or more x breadboard(s)
* 1 x Arduino UNO

Bill of Materials for V2.0:
* a reasonable ammount of air hose (1/4").  I used about 10 ft
* 4 x 12 volt- 5 way 2 state solenoid valve (cic 4V220-08FT)
* 1 x Computer power supply (ATX power supply -will give specific when I have it-
* 5 ft Red wire (16 - 20 Gauge)
* 5 ft Black wire (16 - 20 Gauge)
* 1 x Phillips screwdriver 
* 4 x MAL 20 x 150 pnumatic piston (cic 8188195)
* 8 x Pnumatic scilencers
* 4 x 1/4" NPT speed controller
* 16 x 1/4" Hose to screw adapter
* 1 x Air compresser and a air compresser to 1/4" tube adapter (varies based on your compresser)
* 1 x 8 Channel relay (5v signal, and up to 12v 10A in/out)

# Build Instructions
==================
V1:


![alt tag](https://github.com/ward208k/CS207_Project/blob/master/images/V1-0.jpg)

Button set up:

1. Attach 4 push-buttons to a bread board
2. Connect 5V power to one side of the button, and a 10K resistor to ground on the same 'side'
3. Connect the opposing side of the button to analog in (I had trouble with digital-in consistency)
The above steps should make you 4 pull up buttons that give input of 1023 when pushed (and a very
random lower number if not pressed.)

LED set up:

1. Attach 4 LEDs to a bread board
2. Connect 4 digital pins to the positive end of the LEDs
3. Connect a resistor to ground for each of the LEDs
The above steps should give you 4 independant LEDs in an array formation

Code:

1. Download V1.X from the Build/V1 list (where X is the greatest number uploaded)
2. Swap the pin constants at the start of the code to what you set up
3. Upload the file to your Arduino
The above code should now be uploaded and exhibit basic input/output


V2:

//![alt tag](https://github.com/ward208k/CS207_Project/blob/master/images/V2-0.jpg)

Solenoid valve setup:
(will upload imnage soon)
1. I would recommend watching this video as it explains how to wire a solonoid valve correctly
[![valves](http://img.youtube.com/watch?v=_tby5VuvNuk)](https://www.youtube.com/watch?v=_tby5VuvNuk)
2. (optional) After you have wired your solenoid controls, you should solder an arduino pin to the exposed wire.  This is optional, but very helpful in the long run.
3. At this point, you should prep your air flow system.  You want to screw in a hose adapter to the middle hold of each valve, and two scilencers in the holes on either side.  Attach two more hose adapters to the holes on 'top'.  Attach one speed control valve to the top of the piston (the non-punchey end), and a regular adapter to the other end.  Be sure to teflon tape all the valves, but not the scilencers.
4. Cut the hose in about 1ft lengths until you have 12 lengths of hose.  Connect using hose the 'top' of the valves and the two piston valves.  It does not matter what port hooks to what adapter, as long as you know what one does what when you program your board.
5. You should test each valve independantly before attaching them all together, so hook up the air compressor and press the test buttons on the valve and see if it works.
6. If all 4 valves work, then you are good to mount them to the body of the robot, which will be the next section.

Body Building:
(will upload image soon)
1. Cut 2 12in length of 2/4 wood, and 2 14in lengths of it.
2. Cut 4 'legs' that can be any dimention as long as your pistons touch the ground.  This will vary based on the pistons you bought and how offset your pistons will be.
3. Cut a 14x14in square for the top.
4. Assemble it all together with screws or nails and glue.
5. Attach the pistons using 'strap-it' and screws so that it just touches the ground when fully extended.  Mount the valves on the top of the body a reasonable distance from both the center and the edge.  You will have to fit both the power supply and the arduino on as well, so think ahead.
6. Once that is all attached, go ahead and test it with all the valves connected.

Arduino Connection and Code:
(will upload image soon)
I dont have this working myself yet, but when I do, I will upload it here.
# Usage
=====

V1:
This version is designed to show basic input/output of the Arduino system, lighting up an LED when
you press a button.  This is mostly to get a feel for the input/output process and get an understanding
of what the rest of the project will focus on, as well as making a modular system.  I built this version
on two seperate breadboards (three technically, but one is attached to the Arduino its self).  This build
can be completely skipped if the maker is confident with his/her ability to understand input/output.

V2:
This version is just the valve setup and body building.  Used specifically for testing to see if the valves
all are working properly and that everything is connected correctly.  Simply press the test buttons on each
valve and see if you get feedback.  You can also use a 9 volt battery to test the wires, although you will
not be able to use a 9 volt battery for the final project.

# Team
=====

The build team consists of Kaden Ward only.

# Credits
=======

Special thanks to Trevor Tomesh, instructor of CS 207 at the U of R, 2017 Winter semiester.
