#include <Keypad.h>

// byte variable equals 8 bits (half size of an int variable)
// const variables cannot be modified
const byte ROWS = 4;
const byte COLS = 4;
const int LED = 10;
//the actual matrix of our keypad (as it is a MATRICIAL keypad)
// array of arrays of fixed size s
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
// arrays of fixed size
byte pinRow[ROWS] = {9,8,7,6};
byte pinCol[COLS] = {5,4,3,2};

Keypad kp = Keypad(makeKeymap(keys), pinRow, pinCol, ROWS,COLS);

char MKEY[7] = "123456";
char UKEY[7];
byte index = 0;
// variable used for a character ('a','b'....) needed for the Keypad object
char KEY;
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {

   KEY = kp.getKey();
   
   if(KEY){
    /*
    if(KEY=='D'){
      digitalWrite(LED, LOW);
    }
    */
    UKEY[index] = KEY;
    index = index + 1;
   }
  if(index >5){
    if(!strcmp(UKEY, MKEY)){
       Serial.println("KEY CORRECT");
       digitalWrite(LED, HIGH);
       delay(500);
       digitalWrite(LED, LOW);
    }
    index = 0;
  }
  
  

  
  
}
