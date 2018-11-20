#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // RS, E, DB4, DB5, DB6, DB7

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  lcd.print("Hello world");
  delay(10);
}
