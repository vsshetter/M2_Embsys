# ALGORITHM
This is software based project so in order to calculate distance here we are using potentiometer and voltmeter as assuming its is the distance value.
# STEP 1 :
 ## VARYING POTENTIOMETER FOR GETTING VOLTAGE(it is considerd as distance)
* As Ultrasonic sensor calculates the distance with help of transmitter and reciever
* If distance < = 100cm
* assumne value is 94
* That means in in a tank having  500cm space ,there  only 94cm is amount is left to full the tank.
* It is almost like water is filling the tank.
# STEP 2 :
## LEDS GET ACTIVATED
* As,sensor sends values to arduino
* From there arduino sends Logic low to LED 2 and high to led 1
# STEP 3
# SERVO MOTOR GETS INITIALIZED
* Servo gets rotated to by 180 degree clockwise to indicates that 
* Close the valve
* Remains in that position untill next itration.
# STEP 4
# LCD DISPLAY 
* It displays the distance value at every itration
* Displays the status of the valve
* Here,it displays "CLOSE THE VALVE".
# STEP 5
* When distance > 100 
* Exactly opposite process happens.
# SIMULATION PIC IS ATTACHED FOR THE CASE
![Screenshot (57)](https://user-images.githubusercontent.com/46949062/157214560-f9f81882-bb9b-4216-8a94-3ce84f693ec1.png)
