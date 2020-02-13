# Line_Following_Arduino
Basic line following robot using Arduino Nano



Sensors used: 4 IR Sensors

IR sensors give 1 when white is detected and 0 when black is detected

Array of four sensors is used such that at any point 2 sensors are on the line

S1 S2 S3 S4

 0  1  1  0             ------FORWARD------

1     1   0   0             --------LEFT-------

0     0   1   1             -------RIGHT-------

1     1   1   1             -------STOP--------
