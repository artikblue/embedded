#include <DHT.h>    // install: "DHT sensor library by Adafruit"
#include <DHT_U.h> // install "Adafruit Unified Sensor by Adafruit"

int SENSOR = 2;     // digital 2 pin data.
// DHT22 is the one used here. Reads from -40 to 125 celsius error is -+0.5 degrees
// humidity 0% to 100% +-2.5% of error
//3 to 5.5 v
int TEMP;
int HUMIDIT;

DHT dht(SENSOR, DHT22);   // we create the object, we are monitoring a DHT22 (other option is DHT11)
void setup(){
  Serial.begin(9600);   // serial initialization
  dht.begin();      // sensor initialization
}

void loop(){
  TEMP = dht.readTemperature();  // get current temp
  HUMIDIT = dht.readHumidity();   // get current humidity
  Serial.print("Temp: ");  // writing
  Serial.print(TEMP);
  Serial.print(" Hum: ");
  Serial.println(HUMIDIT);
  delay(500);
}
