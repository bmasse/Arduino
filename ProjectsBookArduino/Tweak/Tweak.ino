void setup() {
  Serial.begin(3600);

}

void loop() {
  Serial.write(analogRead(A0)/4);
  delay(1);
}


