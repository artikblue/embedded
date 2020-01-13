

int RELAY = 2;

void setup() {
  // analog inputs do not requiere initialization
  pinMode(RELAY, OUTPUT);
}

void loop() {
  //relays get activated with a LOW level
  digitalWrite(RELAY, LOW); 
  delay(5000);
  digitalWrite(RELAY, HIGH);
  delay(5000);
}
