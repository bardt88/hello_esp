#include <wifiFunc.h>
#include <ioFunc.h>
#include <wifiLogin.h>
#include <Arduino.h>
#include <WiFi.h>

void setup() {
	Serial.begin(9600);
	Serial.println("");
	Serial.println("init start");
	Serial.println("connecting to wireless network");
	Serial.print("SSID: ");
	Serial.println(wlSSID);
    WiFi.begin(wlSSID, wlPASS);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    Serial.println("setting input and output pins");
    setPins();
    printMAC();
    startServer();

	Serial.println("init done");
	delay(500);
  }

void loop() {
	
	httpLED();
  	readSound();

}

