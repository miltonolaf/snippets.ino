float in_ph = A0;
float in_th = A2;
float photo_r, value, threshold; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  photo_r = analogRead(in_ph);
  threshold = analogRead(in_th);
  value = ((photo_r * 5)/1023);
  
  Serial.print("Reading = ");
  Serial.print("\t");
  Serial.print(value);
  Serial.print("\t\t");
  Serial.print("Threshold = ");
  Serial.print("\t");
  Serial.println(threshold);
  
  if(photo_r > threshold){
    analogWrite(12, photo_r/4);
  }else{
    analogWrite(12, LOW);
  }
  
  delay(500);
}
