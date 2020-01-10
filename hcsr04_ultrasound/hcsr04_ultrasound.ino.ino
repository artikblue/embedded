int TRIG = 10;
int ECO = 9;
int LED = 3;
int DTIME;;
int DIST;
//wrote for arduino uno
//blinks a led if an object approaches 20cm or less to the HC SR04 SENSOR (ultrasound)

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DTIME = pulseIn(ECO, HIGH);
  //we convert dist to cm
  DIST = DTIME / 58.2; //value specified from the manufacturerr
  Serial.println(DIST);
  delay(200);

  if(DIST <= 20 && DIST >= 0){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
