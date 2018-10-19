float input = A0;
float output = A2;
float data;
float value;
float threshold; 

void setup() {
  Serial.begin(9600); //inicia la comunicación serial a un baud rate de 9600
}

void loop() {
  data = analogRead(input);
  threshold = analogRead(output);
  value = ((data * 5)/1023);
  Serial.println(data); //pinrtln = salto de linea
  Serial.println(threshold); //pinrtln = salto de linea
  if(data > threshold){
    analogWrite(12, data/4);
  }else{
    analogWrite(12, LOW);
  }
  delay(500);
  
}
