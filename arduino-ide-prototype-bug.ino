void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("2 + 2 = ");
  Serial.println(add(2, 2));
  delay(1000);
}

