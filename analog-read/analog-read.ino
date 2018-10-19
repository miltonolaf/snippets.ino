float val; // variable to store the value read
float op;
void setup()
{
  Serial.begin(9600); //  setup serial
  pinMode(12, OUTPUT);
}

void loop()
{
  val = analogRead(A0); // read the input pin
  op = val * 255 / 1023;
  Serial.println(op, 2); // debug value
  analogWrite(12, op);
  delay(100);
}

