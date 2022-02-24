# LOW LEVEL EMBEDDED SYSTEMS


# Vehicle Speed Limitor 

# Introduction
Over speeding vehicle make lot of problems sometimes also leading to loss of lives and other damages. Also imposing speed restrictions through sign boards have been rendered fruitless wherein the vehicle drivers do not comply with it and resulting catastrophic. Vehicle Speed Limit Controller Project is a great solution to this problem as it not only provides speed limitations, it also implements it through a controlling mechanism. 

# Components
* Hardware : Buttons and electronic circuitry, resistors ,capacitors, transistors cables and connectors diodes pcb and breadboards led, atmega microcontroller, rf module, 9V battery, dc motor ,lcd display, crystal oscillator
* Software : Programming language c
* Mechanical : The project works with RF communication between the speed sign post and the vehicle controller system. A motor is used here to depict as a vehicle. Whenever a vehicle comes in range of the RF speed sign post, the sign post transmits the speed limit for that particular road to the vehicle system.  

# Component Description
* Microcontroller : This is the cpu of our project.We are going to use a microcontroller of 8051 family.
* LCD : The speed of the vehicle and the limits are displayed on an LCD. 
* Push Buttons :The speed of the vehicle can be incremented / decremented manually with the help of push buttons.
* Dc motor is considerd as engine here.

# Low Level Requirements
![ID_3](https://user-images.githubusercontent.com/46949062/154904441-e8700364-63ee-4fc9-9ad4-7e6364b261b6.jpg)
# High level Requirements
![hlr_2](https://user-images.githubusercontent.com/46949062/154938054-a8fdacad-361f-4d43-b833-08121d3c8fcf.jpg)
# Block Diagram
# Transmitter
*![transmiter2](https://user-images.githubusercontent.com/46949062/154932081-f940ebfe-94cc-49ff-b6a3-1bc7caf3e327.jpg)
# Reciever
*![transmiter](https://user-images.githubusercontent.com/46949062/154929820-16375543-5a05-4361-a3ba-55026ac05bda.jpg)

# 5W'S & 1H
# WHO
* Useful for public and Vehicle manufacture's.
# WHAT
* A portable that is used to give the exact speed of vehicle passing through sign post.
# WHEN
Implemented during intial stages of vehicle manufacturing.
# WHERE
* Useful in automotive industry.
# WHY
* Because india is such a country where daily more road accidents are occuring to avoid this it is useful.
# HOW
* Vehicle Speed Limit Controller Project is a great solution to this problem as it not only provides speed limitations, it also implements it through a controlling mechanism. 


# Working
* This project works with RF communication between the speed sign post and the vehicle controller system. A motor is used here to depict as a vehicle. Whenever a vehicle comes in range of the RF speed sign post, the sign post transmits the speed limit for that particular road to the vehicle system. The vehicle controller system receives this signal through RF receiver and further perceived by the microcontroller. 
* The speed of the vehicle can be incremented / decremented manually with the help of push buttons. If the system was at lower speed than the limit received from the sign post than there will be no changes made to the speed of the system. However, if the speed of the vehicle was manually incremented to a higher value, then the controller will impose the speed restriction and bring back the speed value to the value specified by the limit.
*  Now if the user tries to increase the speed, the system does not allows it to do so till it is in range of the RF speed sign post. The speed of the vehicle and the limits are displayed on an LCD. Thus this system greatly helps in curbing the speed of over speeding vehicles ensuring safety of vehicles on accident prone road ways.




# COMPLEX LEVEL EMBEDDED SYSTEMS

# Alcohol Sensing Display With Alarm Project

# Introduction
An alcohol sensing system that measures alcohol intake, displays percentage of alcohol and also sounds an alarm if it is above a particular threshold. Here we use an alcohol sensor circuit along with lcd display and a buzzer alarm.
This system thus allows to measure amount of alcohol and then display percentage of alcohol measured. Also a alarm is sounded that indicates that measured alcohol is above a particular percentage.
# Components
* Hardware : MQ3 Alcohol Ethanol Sensor,Crystal Oscillator, Atmega Microcontroller, Buzzer,Resistors,Transistors,Diodes,LED, Push Buttons,Switch.
* Software : MC Programming Language C.

# Component Description
* MQ 3 Alcohol Ethanol Sensor : MQ3 is one of the most commonly used sensors in the MQ sensor series. It is a Metal Oxide Semiconductor (MOS) type of sensor. Metal oxide sensors are also known as Chemiresistors, because sensing is based on the change of resistance of the sensing material when exposed to alcohol. So by placing it in a simple voltage divider network, alcohol concentrations can be detected.


* Crystal Oscillator : A crystal oscillator is an electronic oscillator circuit that uses the mechanical resonance of a vibrating crystal of piezoelectric material to create an electrical signal with a constant frequency. 

* Atmega Microcontroller :The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter.


* Buzzer : The vibrating disk in a magnetic buzzer is attracted to the pole by the magnetic field. When an oscillating signal is moved through the coil, it produces a fluctuating magnetic field which vibrates the disk at a frequency equal to that of the drive signal.


# Block Diagram
![Block](https://user-images.githubusercontent.com/46949062/155168869-85a94614-3a51-4e1c-869a-a804b3e3de3b.jpg)
# Application
* The main thing is that it is very much useful for our police department to avoid the accident cases.
