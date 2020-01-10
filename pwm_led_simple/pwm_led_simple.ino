int LED = 3;
int POT = 0; //potentiometer
int LEDSHINE;

void setup() {
  // analog inputs do not requiere initialization
  pinMode(LED, OUTPUT);
}

void loop() {
  //analog read reads from 0 a 1023 in this case
   LEDSHINE = analogRead(POT)/4; //to adjust it to 255 scale
   analogWrite(LED, LEDSHINE);
}
