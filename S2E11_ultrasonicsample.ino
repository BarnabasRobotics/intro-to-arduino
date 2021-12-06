/*
1) wire up and code ultrasonic sensor to display distance to serial monitor
2) determine unit of the distance
3) determine the maximum sensing distance of the ultrasonic sensor
4) program the box to open when you get close and close if you move away
*/

#include <Servo.h>

int open = 90;
int close = 180;
int half = 135;

int red = 3;
int green = 5;
int blue = 6;

Servo myServo;

int ultrasonic(int trigPin, int echoPin)
{
  long duration;
  // setup trigger and echo pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // send out trigger signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  
  // wait for a pulse on the echo pin
  duration = pulseIn(echoPin, HIGH);
  
  // take the pulse and scale it to cm
  duration = duration / 59;

  // if duration is less than two or greater than 300, something is wrong.  Return an error.
  if ((duration < 2) || (duration > 300)) return false;

  return duration;
}


void setup() {
  pinMode(9,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(4,OUTPUT);
  pinMode(7,INPUT);
  
  
  pinMode(green,OUTPUT);
  
  
  myServo.attach(9);
  
  Serial.begin(9600);
  
}

void loop() {
  
  //- our first conditional
  int potentiometer;
  int intensity;
  
  int distance;
  
  distance = ultrasonic(4,7);
  Serial.println(distance);
  
  potentiometer = analogRead(A0);
  
  //-check intensity and and use potentiometer to update new intensity
  
  //- map()
  
  
  //Serial.println(potentiometer);
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
