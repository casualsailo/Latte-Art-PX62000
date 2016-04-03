#include <DualMC33926MotorShield.h>

const int PWM=5;            //Pin5 PWM
const int DISPENSE=12;      //Pin12 DISPENSE
const int AMD1=35;          //Motor A1 orientation
const int AMD2=36;          //Motor A2 orientation
const int BMD1=6;           //Motor B1 orientation
const int BMD2=7;           //Motor B2 orientation


//Motor Functions:
//AMD1: || AMD2:  || PWM: || Mode:
//  L   ||  H     || H    || CCW
//  H   ||  L     || H    || CW
//  L   ||  L     || H/L  || Stop
//  H   ||  H     || H/L  || Stop




void setup() {
  // put your setup code here, to run once:
pinMode(PWM, OUTPUT);
pinMode(DISPENSE, OUTPUT);






}


void loop() {
  // put your main code here, to run repeatedly:
  int Speed = 255; 
  
  

}


void dispense() {                   //Dispense Caramel
digitalWrite(DISPENSE, HIGH);       //Set voltage of pin 12 to high
delay (500);                        //Delay by 1/2 of a second ~500 ms.

}
