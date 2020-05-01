# Vertical Farming Controls
*Project by Fatema*


This repository stores the C code necessary for the automated control of the:
  - Reservoir refill system
  - Atmospheric Water Generator system





## Solenoid Refil Wiring Diagram

![](https://github.com/m-a-c-k/verticalFarming/blob/master/images/solenoid_setup.png)
*Figure 1*

- The above wiring diagram shows the necessary connections for the functionality of the 12V solenoid device, being controlled by the Arduino Uno Micro-controller.
- In practice, the setup pictured will be used in conjunction with the 2-wire float switch(s), which will provide the input into the Arduino to control when the solenoid should open and close. 
 -The above setup requires 5V DC minimum for the arduino to function, as well as 12V-20V DC to operate the solenoid valve.









![](https://github.com/m-a-c-k/verticalFarming/blob/master/images/awg_2.png)
*Figure 2*
- Figure two shows a diagram of the AWG system which utilizes the Temperatyre/Humidity sensor input to control the operation of the AWG.
