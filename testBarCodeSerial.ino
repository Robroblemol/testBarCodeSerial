#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX

#define barlength 23

int p=0;
int arrayCad [barlength+10];

void setup() {
  Serial.begin(9600, SERIAL_8N1);
  mySerial.begin(9600);

}

void loop() {

  if (mySerial.available()) {
      if(p<=barlength){
        arrayCad[p]=mySerial.read();
        p++; 
    }
  }
  if(p==barlength){
     Serial.println (barToString(arrayCad));
     Serial.println ("dia: "+barToString(arrayCad).substring(7,10));
     //Serial.print ("dia long: ");
    // Serial.println (getDayBar(arrayCad));
     memset(arrayCad, 0,sizeof(arrayCad));
     p=0; 
  }
  

}
