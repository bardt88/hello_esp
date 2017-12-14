#include <Arduino.h>

void setupp() {
  Serial.begin(9600);
}

void loopp() {
  delay(1000);
  Serial.println("Hi!");
}
