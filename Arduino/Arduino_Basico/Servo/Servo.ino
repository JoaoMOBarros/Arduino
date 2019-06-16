#include <Servo.h>


Servo servo_motor;

void setup() {

  servo_motor.attach(9);
  servo_motor.write(167);

}

void loop() {

}
