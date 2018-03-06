# OldArduiPhone

*Arduino used as an interface between an old rotary dial telephone and a cellphone*

## Things
+ Arduino
+ Opto-Isolators (13)
+ 1k Resistors (13)
+ 10k Resistors (2)
+ An old rotary dial telephone
+ A cheap cellphone
+ wires

![Diagram](https://github.com/JeBear76/OldArduiPhone/blob/master/Diagrams/OldArduiPhoneBasic.png)

## (Very) Basic Diagram 
Is diagram is only an example for connecting the cellphone keypad to the Arduino (on the left)  
The blue wire connects to a row on the keypad and the green, to a column.  
To do the whole keypad, you'll need to connect each O-I to its combination of row and column.  
  
3.3v is enough to power the dial since in essence, it's just a switch (disappointing.. I know.. I thought that'd be way more fancy :)
The grey wire serves to detect when the dial is in use.
The orange wire goes the the output of the dial's pulsating switch

[Full Story on Hackster.io](https://www.hackster.io/Jerepondumie/oldarduiphone-or-the-hipster-cellphone-649686)

