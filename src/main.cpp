#include <Arduino.h>

// the external LED is connected to pin GP15
pin_size_t gpioLed = 15;

void setup() {
    Serial1.begin(115200);
    while(!Serial1);

    pinMode(gpioLed, OUTPUT);
}

int loopCount = 0;

void loop() {
    Serial1.printf("Loop %3d:\r\n", ++loopCount);
    Serial1.printf("    LED on GP%d ON.\r\n", gpioLed);
    digitalWrite(gpioLed, HIGH);
    delay(100);
    Serial1.printf("    LED on GP%d OFF.\r\n", gpioLed);
    digitalWrite(gpioLed, LOW);
    delay(900);
}