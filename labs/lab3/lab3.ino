#define DIGITAL_OUTPUT_PIN 11
#define ANALOG_OUTPUT_PIN DAC0

const int quality = 20;

const double frequency = 440.0;

const double delay_time = 1000 / (frequency * 2);

const int delta_time_analog = (1.0 / frequency) / (double)quality * 1000000.0;

double points[quality] = {0};

void setup() {
  pinMode(DIGITAL_OUTPUT_PIN, OUTPUT);
  pinMode(ANALOG_OUTPUT_PIN, OUTPUT);
  analogWriteResolution(12);
  for (int i = 0; i < quality; i++) {
    points[i] = sin(i / (double)quality * 2 * PI) * 2047.0 + 2047;
  }
}

void digitalSquareWave() {
  digitalWrite(DIGITAL_OUTPUT_PIN, HIGH);
  delay(delay_time);
  digitalWrite(DIGITAL_OUTPUT_PIN, LOW);
  delay(delay_time);
}

void analogSineWave() {
  for (int i = 0; i < quality; i++) {
    analogWrite(ANALOG_OUTPUT_PIN, points[i]);
    delayMicroseconds(delta_time_analog);
  }
}

void loop() {
  analogSineWave();
}
