#include <testFunc.h>
#include <Arduino.h>
#include "WiFi.h"

void setup() {
	Serial.begin(9600);
    WiFi.mode(WIFI_STA);
	Serial.println("Setup done");
  }

void loop() {
	printHi();
	wifiScan();
  
}
