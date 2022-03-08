# 1 BLOCK DIAGRAM AND EXPLANATION 
# 1.1 BLOCK DIAGRAM
![Untitled Diagram drawio (1)](https://user-images.githubusercontent.com/46949062/157125453-1cbbaa33-7693-41b3-afd9-f1483b83aefa.png)
# 1.2 SENSOR
# Ultrasonic Sensor (HC-SR04)
# working
![image](https://user-images.githubusercontent.com/46949062/157126698-ceb4f1e4-0ce8-4ed2-bf35-baa4fe514f7f.png)

* It is basically a distance sensor and is used for detecting the distance using SONAR method. It has two ultrasonic
  transmitters namely the receiver and the control circuit. The transmitter emits a high frequency ultrasonic sound
  wave which bounces off from any solid object and receiver receives it as an echo. 
* The echo is then processed by the control circuit to calculate the time and the difference between the transmitter and receiver signal.
  This time can subsequently be used to measure the measure the distance between the sensor and the reflecting object.It has an ultrasonic
  frequency of 40 KHz and accuracy is nearest to 0.3 cm.
  
 # 1.3 ACTUATORS
*  LCD display
   Baseed on the value taken by by sensor it displays the empty sapce in the tank and also indicates the necessery actions .
   LCDs allowed displays to be much thinner than cathode ray tube (CRT) technology. LCDs consume much less power than LED and gas-display displays because they work on the          principle of blocking light rather than emitting it.
   
 * Servo motor 
   Servo motors or “servos”, as they are known, are electronic devices and rotary or linear actuators that rotate and push parts of a machine with precision.
   Servos are mainly used on angular or linear position and for specific velocity, and acceleration.
   It is used to open and close the valves to cotrol the wastage of water and based of disatnce value it rotates either 180 degree or 90.
   ![servo](https://user-images.githubusercontent.com/46949062/157128233-0a9aafaa-06d2-4382-86f3-50b6e096b432.jpg)
   
  # 1.4 MICROCONTROLLER AND MEMORY
  
  # Arduino UNO
 * Arduino UNO has the micro-controller ATmega328 embedded in it. It has 14 digital I/O pins out of which 6 provide
   PWR output. It is an open-source and provides prototype platform. It also has a 16MHX crystal oscillator attached
   to it. In addition to the above features, it also has an USB connection, a power jack, an ICSP, header and reset
   button.It has everything to support a micro-controller. It can simply be connected to a computer using an USB cable or
   power it with an AC or a DC adapter or a battery.
  # EEPROM
   Here this is actually inside the microcontroller
  # delay
  These functions are used for smooth goingof project helps every functions to perform their task.
  # MicroController:
  *  This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces motor and LCD and controlls the sensor,light and          voltage depending on the value we pressed on potentiometer.
  # 1.5 SUBSYSTEM & OTHERS
  # Led
  * Light-emitting diode (LED) is a widely used standard source of light in electrical equipment. It has a wide range of applications ranging  
   from your mobile phone to large advertising billboards. They mostly find applications in devices that show the time and display different types of data.
  * LEDs allow the current to flow in the forward direction and blocks the current in the reverse direction.Here, 2 leds are used for confermation of opening and closing of         valve.
  # Resistors
  * A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element.
    In electronic circuits, resistors are used to reduce current flow, adjust signal levels, divide voltages, bias active elements, and  
    terminate transmission lines, among other uses.Resistors are common elements of electrical networks and electronic circuits and are 
    ubiquitous in electronic equipment.Practical resistors as discrete components can be composed of various compounds and forms.
    Resistors are also implemented within integrated circuits.Here we used 100 ohm 2 resistors that connected to 2 leds.
  # Voltmeter
  * voltmeter, instrument that measures voltages of either direct or alternating electric current on a scale usually graduated in volts, millivolts (0.001 volt), or kilovolts       (1,000 volts). Many voltmeters are digital, giving readings as numerical displays.Here,voltmeter is used to change the voltage levels.
  # Potentiometer
  * A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the         wiper, it acts as a variable resistor or rheostat.Here,they are used to measure displacement in any direction. Linear potentiometers linearly measure displacement and rotary     potentiometers measure rotational displacement.
  # 2 Architecture
  # 2.1 High level flow chart  behavioural diagram
  ![Untitled Diagram4 drawio (1)](https://user-images.githubusercontent.com/46949062/157137087-9b6bd41b-eb71-4bd2-999a-15d4bd60d0ad.png)
  # 2.2 Low level flow chart  behavioural diagram
  ![Untitled Diagram5 drawio](https://user-images.githubusercontent.com/46949062/157141458-ed3319e0-5024-4efb-89fa-9d09d66703e7.png)
