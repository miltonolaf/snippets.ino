int lightPin = A0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(lightPin);
  Serial.println(reading);
  
  delay(500);
}

