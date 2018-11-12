#include <Servo.h>

Servo servoMotor;
 
void setup() {
  Serial.begin(9600);
 
  servoMotor.attach(9);
}
 
void loop() {

//  servoMotor.write(0);
  
 
  for (int i = 0; i <= 180; i++){
    servoMotor.write(i);
    delay(10);
  }
  
  for (int i = 180; i >= 0; i--){
    servoMotor.write(i);
    delay(10);
  }
  
}
