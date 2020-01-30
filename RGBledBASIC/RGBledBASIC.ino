int LEDred = 9;   
int LEDgreen = 10;    
int LEDblue = 11;   

void setup(){
  pinMode(LEDred, OUTPUT); // all defined as output
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDblue, OUTPUT);
}

void loop(){
  myColor(255, 255, 0);   // yellow
  delay(2000);

  myColor(0, 255, 255);   // cyan
  delay(2000);

  myColor(255, 118, 192); // light red
  delay(2000);
  
}

void myColor(int red, int green, int blue){  // custom function
  analogWrite(LEDred, red);
  analogWrite(LEDgreen, green);
  analogWrite(LEDblue, blue);
}
