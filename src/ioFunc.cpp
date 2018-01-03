#include <Arduino.h>

void setPins() {  
    pinMode(2, OUTPUT);          
    pinMode(18, INPUT);          
}  

void pinTestH(){
    digitalWrite(2, HIGH);
}

void pinTestL(){
    digitalWrite(2, LOW);
}

int soundValue = 0;

void readSound() {
	soundValue = analogRead(T9);
	Serial.println(soundValue);
}