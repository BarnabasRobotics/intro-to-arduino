/* Challenges
1) Add the button and make it open when you press, close when you don't press
2) Open when you don't press, close when you press
3) When you press, make it laugh.  When you don't press, stay closed
4) When you press the button -> open the box and turn the LED green
   When you don't press the button -> close the box and turn the LED red
*/

#include <Servo.h>

int open = 90;

int close = 180;

Servo myServo;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  
  myServo.attach(9);
}

void loop() {
  
  //- our first conditional
  
  
  if (digitalRead(2) == HIGH) {
    myServo.write(open);
   
  }
  else { 
    myServo.write(close);
  }
  
}
