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

void ledBlink(int a, int b, int c){
	for (int i = 0; i < a ; ++i)
	{
		digitalWrite(2, HIGH);
		delay(b);
		digitalWrite(2, LOW);
		delay(c);
	}
}