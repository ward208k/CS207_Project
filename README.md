# The Dance Dance Robot V0.1
============
Project repository for CS 207, winter 2017

# Repository Contents
============
Here is a list of all the contents of this project:

* **/hardware** - All the design files and circuit diagrams.
* **/images ** - Where all the images are stored.
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

# Build Instructions
==================
V1:

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

# Usage
=====

V1:
This version is designed to show basic input/output of the Arduino system, lighting up an LED when
you press a button.  This is mostly to get a feel for the input/output process and get an understanding
of what the rest of the project will focus on, as well as making a modular system.  I build this version
on two seperate breadboards (three technically, but one is attached to the Arduino its self), and will 
re-use the buttons for V2, and the LED array for V3.  This build can be completely skipped if the maker
is confident with his/her ability to understand input/output.


# Team
=====

The build team consists of Kaden Ward only.

# Credits
=======

Special thanks to Trevor Tomesh, instructor of CS 207 at the U of R, 2017 Winter semiester.
