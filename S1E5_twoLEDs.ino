/* Challenges
1) 2 lights - blink in sequence
2) 3 lights - blink in sequence
3) 3 lights - turn on in a sequence then turn all off at the same time when you start over
4) 3 lights - turn on in a sequence AND turn off in a sequence before starting over


*/

void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1000);
}
