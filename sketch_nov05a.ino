#include <ESP8266WiFi.h>
#include <SimpleTimer.h>
 
SimpleTimer timer;
 
//String myString; // complete message from arduino, which consistors of sensors data
char rdata; // received charactors
 
//int firstVal, secondVal; // sensors 
void setup() {
  //Serial Begin at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
  rdata = Serial.read(); //Read the serial data and store it
  //int data = Serial.read();

//int rdata1, rdata2;
//rdata = rdata + rdata1+","+rdata2;
  
  Serial.print(rdata);
  }
  //Serial.println();
  /*if(data >50){
    Serial.println("OK");
    }
    else{
      Serial.println("NOT GOOD");
      }*/
  delay(1000);
}
