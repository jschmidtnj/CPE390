#define PUSHBUTTON 7

void setup() {
  Serial.begin(9600); // bits per second (bps)
  // pins default to input
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PUSHBUTTON, INPUT);
}

void loop() {
  // 8 bits per byte, but 2 synchronization bits also sent
  // so 10 bits sent per character
  // so about 1ms per character
  if (digitalRead(PUSHBUTTON) == HIGH) {
    // do something
  } else {
    // do something else
  }
  analogWrite(DAC0, 2048);
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
