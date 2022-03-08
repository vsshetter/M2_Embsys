if(jump <= 100) 
  {
    digitalWrite(LEDm, LOW);                   //turning off one led
    digitalWrite(LEDh, HIGH);            //turning on one led
    right();                     //function to display current status in LCD
    myservo.write(180);       // rotating servo motorin 180 degree
    
  }
  else if( jump < max)
  {
    digitalWrite(LEDh, LOW);
    digitalWrite(LEDm, HIGH);
    left();
    myservo.write(90);               //rotating servo in 90 degree
    
   }
   else{
    digitalWrite(LEDm, HIGH);
    digitalWrite(LEDh, HIGH);
    lcd.clear();
  lcd.setCursor(1,1);
  lcd.print(" tank is full ");
    myservo.write(180);
   }
delay(450);   
}
void right() {
  lcd.clear();                             //clear the LCD(prvious values)
  lcd.setCursor(1,1);                 //second row and second column of LCD
  lcd.print(" close tap ");        //printing in lcd
 

 
}

void left() {
   lcd.clear();
  lcd.setCursor(1,1);
  lcd.print(" open tap ");

 
