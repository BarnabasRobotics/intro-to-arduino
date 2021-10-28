/* Challenges
1) Wire RGB light by connecting the right color wires to the right pins
2) Create variables for the pin numbres
3) Make ambulance siren light
4) create turquoise using RGB color code tool
5) create colors of the rainbow (ROYGBIV)
*/

int red = 3;
int green = 5;
int blue = 6;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}


void myFadeFunction(int color, int start, int end) {
  
  int intensity = start;
  
  while (intensity <= end) {
    analogWrite(color,intensity);
    intensity = intensity + 1;
    delay(50);
  }
  
}

void loop() {
  
  
  //-red
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(blue,0);
  delay(1000);
  
  
  myFadeFunction(green,1,20);
  
  //orange
  analogWrite(red,255);
  analogWrite(green,20);
  analogWrite(blue,0);
  delay(1000);
  
  
  myFadeFunction(green,20,100);
  
  //yellow
  analogWrite(red,255);
  analogWrite(green,100);
  analogWrite(blue,0);
  
  delay(1000);
  
  //green
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(blue,0);
  
  delay(1000);
  
  //blue
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(blue,255);
  
  delay(1000);
  
  //indigo
  analogWrite(red,153);
  analogWrite(green,255);
  analogWrite(blue,255);
  
  delay(1000);
  
  //violet
  analogWrite(red,153);
  analogWrite(green,0);
  analogWrite(blue,153);
  
  delay(1000);
  
}
