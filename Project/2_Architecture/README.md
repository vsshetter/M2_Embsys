# 1 BLOCK DIAGRAM AND EXPLANATION 
# 1.1 BLOCK DIAGRAM
![Untitled Diagram drawio (1)](https://user-images.githubusercontent.com/46949062/157125453-1cbbaa33-7693-41b3-afd9-f1483b83aefa.png)
# 1.2 SENSOR
# Ultrasonic Sensor (HC-SR04)
![image](https://user-images.githubusercontent.com/46949062/157126698-ceb4f1e4-0ce8-4ed2-bf35-baa4fe514f7f.png)

* It is basically a distance sensor and is used for detecting the distance using SONAR method. It has two ultrasonic
  transmitters namely the receiver and the control circuit. The transmitter emits a high frequency ultrasonic sound
  wave which bounces off from any solid object and receiver receives it as an echo. 
* The echo is then processed by the control circuit to calculate the time and the difference between the transmitter and receiver signal.
  This time can subsequently be used to measure the measure the distance between the sensor and the reflecting object.It has an ultrasonic
  frequency of 40 KHz and accuracy is nearest to 0.3 cm.
  
 # 1.3 ACTUATORS
*  LCD Display:
Displays each and every value we enter in our keypad along with Temperature.

  

# ARDUINO
* It is heart of this project.
Arduino is simply an open hardware development board used by tinkerers, software
developers, innovators, and inventors to design and build devices that communicate with the
real-time situations.
Arduino boards can convert inputs like light on a sensor or a finger on a button and convert
them to outputs like triggering an engine or turning on an LED. Boards are programmed by
giving a series of commands to the board's microcontroller 
* Advantages of Using Arduino
• This model can be implemented as an automated switch to increase energy efficiency. The
counter detects zero people in a room and automatically put off the power supply. Thus,
promoting electricity and energy conservation.
• Easily operated and not complex like micro-controller.
• Compared to microcontrollers which are limited to Windows, while Arduino is supported
with all operating systems, including Linux, Macintosh, and Windows.
# MICRO CONTROLLER AND MEMORY
EEPROM
Here this is actually inside the microcontroller
Clock
Here we are using internal clock of our micro controller.
MicroController:
This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces decive and LCD and controlls the motor ,light  depending on the value .
# ACTUATORS 
# LCD DISPALY
The LCD is a solid-state device that uses liquid crystals to modulate light. It can be either a
computerized visual display or a display screen. LCDs do not emit light directly, so they can
be used to display any image (as in a general-purpose computer display).
# Motor:
Helps in movement of objects towards sensor.
# SENSORS
# KY-023 
* The KY-032 Dual Axis Joystick module uses a uses a biaxial potentiometer to control the X and Y axis. When pushed down, it activates a switch. Based on the PS2 controller's joystick, it's used to control a wide range of projects from RC vehicles to color LEDs.
# LEDS
* These are used as replacement for buzzers.
# SUBSYSTEM & OTHERS
# Motor Driver Unit:
Helps in driving the motor for our movement of object by providing required power for them(we use motor driver L293).
# FLOWCHART
![Untitled Diagram1 drawio](https://user-images.githubusercontent.com/46949062/155834707-79c976ce-5401-4ecb-8c7f-b3fedef1f27f.png)
# HIGH LEVEL USE CASE DIAGRAM
![Untitled Diagram3 drawio](https://user-images.githubusercontent.com/46949062/155835169-39f386f7-a5a9-4217-852b-fa01eff543f3.png)
# LOW LEVEL USE CASE DIAGRAM
![Untitled Diagram4 drawio](https://user-images.githubusercontent.com/46949062/155836195-35e158fe-26be-4d4c-ae19-e5d1d7051f9b.png)


