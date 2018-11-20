#include <Servo.h>

Servo servoMotor;
int angle, input;

void setup() {
 Serial.begin(9600);
 servoMotor.attach(12);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.parseInt();
    if(input > 180){
      servoMotor.write(180);
      Serial.println(input);
    } else {
      servoMotor.write(input);
      Serial.println(input);
    }
    delay(10);
  }
}
