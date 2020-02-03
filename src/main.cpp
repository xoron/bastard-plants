#include <Arduino.h>
// #include "./io/valve/valve.h"
// #include "./io/water-sensor/water-sensor.h"
// #include "./io/temperature-humidity-sensor/temperature-humidity-sensor.h"
// #include "./io/stepper-motor/stepper-motor.h"

#include "components/stepper-motor/stepper-motor.h"
#include "components/servo-motor/Servo.h"

// const int stepsPerRevolution = 400;  // change this to fit the number of steps per revolution
// // for your motor

// // initialize the stepper library on pins 8 through 11:
// Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 


void setup() {
  // // set the speed at 60 rpm:
  // myStepper.setSpeed(25);
  // // initialize the serial port:
  // Serial.begin(9600);

  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  // // step one revolution  in one direction:
  // Serial.println("clockwise");
  // Serial.println(stepsPerRevolution);
  // myStepper.step(stepsPerRevolution);
  // delay(1000);

  // // step one revolution in the other direction:
  // Serial.println("counterclockwise");
  // Serial.println((-stepsPerRevolution));
  // myStepper.step((-stepsPerRevolution));
  // delay(1000);

  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1000, 0, 360);     // scale it to use it with the servo (value between 0 and 180) 
  myservo.write(val);                  // sets the servo position according to the scaled value 
  delay(15);
}
