int xVal = 0;
int yVal = 0;
int bVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(0, INPUT);
  digitalWrite(0, HIGH);
}

void loop() {
  xVal = analogRead(A1);
  yVal = analogRead(A0);
  bVal = digitalRead(0);

  Serial.print(xVal, DEC);
  Serial.print(" ");
  Serial.print(yVal, DEC);
  Serial.print(" ");
  Serial.print(!bVal, DEC);

  Serial.print("\n");
  delay(100);

}