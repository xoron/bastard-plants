#include <Arduino.h>
#include "./io/valve/valve.h"
#include "./io/water-sensor/water-sensor.h"
#include "./io/temperature-humidity-sensor/temperature-humidity-sensor.h"

void setup() {
  // put your setup code here, to run once:
  Serial.print("hello wolrd in setup()");
}

void loop() {
  // put your main code here, to run repeatedly:

  int soilMoistureLevel = getSoilMoistureLevel(); // get soil moisture level
  int temperatureLevel = getTemperature(); // get temperature
  int humidityLevel = getHumidityLevel(); // get temperature

  openValve();
  delay(1000);

  Serial.print("hello wolrd");
}