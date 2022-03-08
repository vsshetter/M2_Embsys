void loop()
{
  int duration,jump,pos=0;         
  digitalWrite(trigPin, LOW);                               //considering square wave as example it has high and low part so trig pin is refered to low with 2 microseconds of delay
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);                   //high part with 10 microseconds of dealy
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);                 //pulsein is used to calculate duration 
  jump = (duration/2) / 29.1 ;                   // time is converted to distance diivided by 2 means wave is travelled from tranmsitter and recieved by the reciever so there 2 paths occured
  lcd.setCursor(0,0);                      //coloum 1 and row 1 of LCD for printing
  lcd.print(jump);                     // print the jump value in lcd
  lcd.print("cm");                // print in centimeter
  delay(1000);              // delay of 1 sec
