#include <Servo.h>

Servo servoMotor;
float input;
int set_up;

void setup() {
 Serial.begin(9600);
 pinMode(A0, INPUT);
 servoMotor.attach(12);
}

void loop() {
  input = analogRead(A0);
  set_up = ((input * 180)/1023);
  servoMotor.write(set_up);
  delay(10);
}
