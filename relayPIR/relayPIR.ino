int PIR = 8;
int RELAY = 9;

int STATE = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIR, INPUT);
  pinMode(RELAY, OUTPUT);
  delay(2000);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  STATE = digitalRead(PIR);
  if (STATE == HIGH){
    Serial.println("DETECTED");
    digitalWrite(RELAY, LOW);
    delay(4000);
   
  }
  else{
     digitalWrite(RELAY, HIGH);
    
  }

}
