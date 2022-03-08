#include <NewPing.h>                                                                                       //library for ultrasonic sensor
#include <LiquidCrystal.h>
#include <Servo.h>
#define trigPin 12                                                                                       // defining ultrasonic pins 
#define echoPin 13  

int D7_pin = 4;                                                                                       // defing and connecting lcd data pins to arduino board
int D6_pin = 5;
int D5_pin = 6;
int D4_pin = 7;
int EN_pin = 11;                                                                                     // enable pin 
int RS_pin = 8;                                                                                    // register set pin is used to increase the brightness of LCD based on register value
int i;

#define max 300                                                                                  // defining maximum space of water tank as max
NewPing sonar(trigPin,echoPin,max); 
int LEDh = 3;                                                                                 // LED pins connected to arduino board
int LEDm = 2;
#define echo1 6
Servo myservo;                                                                               // defining object of servo
LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin); 
