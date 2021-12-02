/*
1) Connect potentiometer and confirm 0-1023 voltage range using serial monitor
2) open box when it is at 1023, close box when it is at 0
3) open box when it is at 1023, close box when it is at 0, AND open half way if it is at 512
4) open box when you press the button, close box when you don't press the button.
   Use potentiometer to control brightness of the your RGB LED (Anycolor)
   
   
   intensity
    - min: 0
    - max: 255
    
   potentiometer
    - min: 0
    - max: 1023
   
   
*/

#include <Servo.h>

int open = 90;
int close = 180;
int half = 135;

int red = 3;
int green = 5;
int blue = 6;

Servo myServo;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(green,OUTPUT);
  
  
  myServo.attach(9);
  
  Serial.begin(9600);
  
}

void loop() {
  
  //- our first conditional
  int potentiometer;
  int intensity;
  

  potentiometer = analogRead(A0);

  
  Serial.println(potentiometer);
  delay(100);  
  
  analogWrite(green, potentiometer/4);
  
  /*

  if (potentiometer == 0) {
    //myServo.write(close);
    analogWrite(green,0);
  }
  
  if (potentiometer > 0 && potentiometer < 100) {
    //myServo.write(half);
    analogWrite(green,45);
  }
  
  if (potentiometer > 100 && potentiometer < 200) {
    //myServo.write(half);
    analogWrite(green,95);
  }
  
  if (potentiometer > 300 && potentiometer < 400) {
    //myServo.write(half);
    analogWrite(green,115);
  }
  
  if (potentiometer > 500 && potentiometer < 600) {
    //myServo.write(half);
    analogWrite(green,135);
  }
  
  if (potentiometer == 1023) {
    //myServo.write(open);
    analogWrite(green,255);
  }
  */
  
  /*
  if (digitalRead(2) == HIGH) {
    myServo.write(close);
   
  }
  else { 
    myServo.write(open);
  }
  */
}
