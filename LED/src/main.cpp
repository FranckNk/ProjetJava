

#include <Arduino.h>
// #include <stdio.h>


/*
const int LedPin = 4;
int Delay = 1000;
  
  
void setup()
{
  pinMode(LedPin, OUTPUT);
  
 
}

void loop()
{
  digitalWrite(LedPin, HIGH);
  delay(Delay); // Wait for 1000 millisecond(s)
  digitalWrite(LedPin, LOW);
  delay(Delay); // Wait for 1000 millisecond(s)
}
*/
void setup(){
  Serial.begin(9600);
   while (!Serial) {
    ; // wait for serial port to connect.
  }
}

void loop(){
  char TextToSend[] = "Test envoyé depuis un uC";
  Serial.println(TextToSend); // sends a \n with text
  delay(1000);
}