# 3 BLOCK DIAGRAM AND EXPLANATION 
# 3.1 BLOCK DIAGRAM
![BLOCKDIANEW drawio](https://user-images.githubusercontent.com/46949062/157245731-787f0e78-cded-4c87-b3a8-ae0cac3f7609.png)

# 3.2 SENSOR
# Ultrasonic Sensor (HC-SR04)
# working
![image](https://user-images.githubusercontent.com/46949062/157126698-ceb4f1e4-0ce8-4ed2-bf35-baa4fe514f7f.png)

* It is basically a distance sensor and is used for detecting the distance using SONAR method. It has two ultrasonic
  transmitters namely the receiver and the control circuit. The transmitter emits a high frequency ultrasonic sound
  wave which bounces off from any solid object and receiver receives it as an echo. 
* The echo is then processed by the control circuit to calculate the time and the difference between the transmitter and receiver signal.
  This time can subsequently be used to measure the measure the distance between the sensor and the reflecting object.It has an ultrasonic
  frequency of 40 KHz and accuracy is nearest to 0.3 cm.
  
 # 3.3 ACTUATORS
 # 3.3.1 LCD display
   Baseed on the value taken by by sensor it displays the empty sapce in the tank and also indicates the necessery actions .
   LCDs allowed displays to be much thinner than cathode ray tube (CRT) technology. LCDs consume much less power than LED and gas-display displays because they work on the          principle of blocking light rather than emitting it.
   
 # 3.3.2 Servo motor 
   Servo motors or “servos”, as they are known, are electronic devices and rotary or linear actuators that rotate and push parts of a machine with precision.
   Servos are mainly used on angular or linear position and for specific velocity, and acceleration.
   It is used to open and close the valves to cotrol the wastage of water and based of disatnce value it rotates either 180 degree or 90.
   ![servo](https://user-images.githubusercontent.com/46949062/157128233-0a9aafaa-06d2-4382-86f3-50b6e096b432.jpg)
   
  # 3.3.3 MICROCONTROLLER AND MEMORY
  
  # 3.3.4 Arduino UNO
   Arduino UNO has the micro-controller ATmega328 embedded in it. It has 14 digital I/O pins out of which 6 provide
   PWR output. It is an open-source and provides prototype platform. It also has a 16MHX crystal oscillator attached
   to it. In addition to the above features, it also has an USB connection, a power jack, an ICSP, header and reset
   button.It has everything to support a micro-controller. It can simply be connected to a computer using an USB cable or
   power it with an AC or a DC adapter or a battery.
  # EEPROM
   Here this is actually inside the microcontroller
  # 3.3.5 delay
  These functions are used for smooth goingof project helps every functions to perform their task.
  # 3.3.6 MicroController:
  *  This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces motor and LCD and controlls the sensor,light and          voltage depending on the value we pressed on potentiometer.
  # 3.5 SUBSYSTEM & OTHERS
  # 3.5.1 Led
  * Light-emitting diode (LED) is a widely used standard source of light in electrical equipment. It has a wide range of applications ranging  
   from your mobile phone to large advertising billboards. They mostly find applications in devices that show the time and display different types of data.
  * LEDs allow the current to flow in the forward direction and blocks the current in the reverse direction.Here, 2 leds are used for confermation of opening and closing of         valve.
  # 3.5.2 Resistors
  * A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element.
    In electronic circuits, resistors are used to reduce current flow, adjust signal levels, divide voltages, bias active elements, and  
    terminate transmission lines, among other uses.Resistors are common elements of electrical networks and electronic circuits and are 
    ubiquitous in electronic equipment.Practical resistors as discrete components can be composed of various compounds and forms.
    Resistors are also implemented within integrated circuits.Here we used 100 ohm 2 resistors that connected to 2 leds.
  # 3.5.3 Voltmeter
  * voltmeter, instrument that measures voltages of either direct or alternating electric current on a scale usually graduated in volts, millivolts (0.001 volt), or kilovolts       (1,000 volts). Many voltmeters are digital, giving readings as numerical displays.Here,voltmeter is used to change the voltage levels.
  # 3.5.4 Potentiometer
  * A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the         wiper, it acts as a variable resistor or rheostat.Here,they are used to measure displacement in any direction. Linear potentiometers linearly measure displacement and rotary     potentiometers measure rotational displacement.
  # 4 Architecture
  # 4.1 Behavioural diagram
  # 4.1.1 High level flow chart  behavioural diagram
  ![highlevelgit](https://user-images.githubusercontent.com/46949062/157250601-1ca769c8-1323-49f2-b4b1-dce540f11ba2.jpg)

  # 4.1.2 Low level flow chart  behavioural diagram
 ![FLOW2 drawio](https://user-images.githubusercontent.com/46949062/157255431-8cf24c8d-6123-4c40-a2e1-afa22cc62f0b.jpg)

  # 4.2 Structural Diagram
  # 4.2.1 High Level UML Use Case Structural Diagram
   ![highlevelgit](https://user-images.githubusercontent.com/46949062/157250185-a6dd4589-fe5f-4c6e-8a91-cb622b618b2c.png)


 # 4.2.2 Low Level UML Use Case Structural Diagram
![LOW LEVEL NEW drawio](https://user-images.githubusercontent.com/46949062/157187535-90f2d9ef-c4e3-49b6-8006-e1da3d53eb70.png)

  # BEST METHODS FOLLOWED
  * The best of the best Diagrams are considered
    from this Diagrams code is made
  * low level and high level both are implimented
  * Exact Mapping of code to avoid confusions
  * Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
  * Followed the exact symbols to make the understanding easier
  
