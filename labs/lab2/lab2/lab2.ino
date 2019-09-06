void setup() {
  // pins default to input
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  // 0.5 Hz
  for (;;)
    ;
  while (true)
    ;
  while (true) {} // all the same
}
