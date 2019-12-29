#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  int soilMoistureLevel = getSoilMoistureLevel(); // get soil moisture level
  int soilMoistureThreshold = getDialReading(); // get dial input

  if (soilMoistureLevel < soilMoistureThreshold) {
    openValve();
    delay(1000);
  }
}