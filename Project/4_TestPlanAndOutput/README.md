# Test plan and output
# HIGH LEVEL TEST PLAN
# Test plan is created and verified on both manual and automated manner

| Test Id  | discription | Input | Expected Output | Actual Output | Passed or Not |
| ------------------------- | ---------------------- | --------------------- | -------------------- | ----------------------| ----------------- |
| 01   |  Potentiometer(voltage)   | 250mv(convetring volts to cm) | LCD should give the exact voltage in display as 24 v  | LCD shows the exact value | PASSED|
| 02  | LED  | 250 mv | LED 1 should turn On  | LED 1 is turned ON  | PASSED |
| 03 | LCD | 250 mv | LCD needs to display as Close the tap | LCD displays the same way | PASSED |
| 04 | Servo motor | 250 mv | Needs to rotate in 180 degree antoclockwise | Servo motor rotates in the same way | PASSED |
| 05 | Maximum input value | 300mv | LCD needs to display as tank is full | LCD displays in the same manner | PASSED |

| Test Id  | discription | Input | Expected Output | Actual Output | Passed or Not |
| ------------------------- | ---------------------- | --------------------- | -------------------- | ----------------------| ----------------- |
| 01 | Servo motor rotation | 90 or 180 degree based on distance value | shall send 1 to LED circuit | shall send 1 to LED circuit | PASSED |
| 02 | LCD display | Amount of distance at every itration | Needs to display distance | Needs to display distance | PASSED |
| 03 | Motor control | Data from Micro controller( shall sends values from sig port to controller) | Data from Micro controller( shall sends values from sig port to controller) |       Data from Micro controller( shall sends values from sig port to controller) | PASSED |
| 04 | Sensor control | Data from senor is controlled by controller and it is displayed by LCD | Data from senor is controlled by controller and it is displayed by LCD | Data from      senor is controlled by controller and it is displayed by LCD | PASSED |

# LOW LEVEL TEST PLAN
| Test Id(LCD)  | discription | Input | Expected Output | Actual Output | Passed or Not |
| ------------------------- | ---------------------- | --------------------- | -------------------- | ----------------------| ----------------- |
| 01 | Checks for LCD | 25 mv |  25 cm |  ~=25cm | PASSED |
| 02 | Checks for LCD | 25 mv | Display close tap | Display close tap | PASSED |
| 03 | Checks for LCD | 300 mv | Display tank is full | Display tank is full | PASSED | 
