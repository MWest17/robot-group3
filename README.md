# Software package for Group 3's robot in EGN 3000L Section 3

Contains all the source code that makes our robot functional


## INSTALLATION

To use this software, first install the latest version of the Arduino IDE from: https://www.arduino.cc/en/software
Follow the Arduino IDE's installation instructions
After the Arduino IDE has been installed, rename this folder to robot-group3
Then run the file named robot-group3.ino with the Arduino IDE
Plug-in the board 
Select the board within the Arduino IDE
Click on the Upload button in the Arduino IDE (It is located in the top left of the IDE)
Lastly, plug in all needed hardware


## TWEAKING

This code has some easily modifiable values for users to experiment with
The straight speed and turning speed are two of these values

To modify these:
Open robot-group3.ino in the Arduino IDE
At lines 3 and 4 there are defined constants
Simply changing these values to any value between 0-255 (inclusive), will adjust the speed
Change the forward and turning speed to the desired values
Then plug-in the board
Select the board in the Arduino IDE
Upload the software to the board
Re-attach any hardware if it was disconnected 