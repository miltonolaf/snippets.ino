#include <LiquidCrystal.h>

float entrada, voltaje;

void setup() {
  mi_lcd.begin(16, 2);
  mi_lcd.clear();

}

void loop() {
  input = analogRead(A0);
  volt = input * 5 / 1024;
  mi_lcd.print();
}
