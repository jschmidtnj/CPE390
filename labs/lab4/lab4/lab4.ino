#define OUTPUT_PIN DAC1

const int quality = 50;

const double frequency = 552;

const double delay_time = 1000 / (frequency * 2);

const int delta_time_analog = (1.0 / frequency) / (double)quality * 1000000.0;

double points[quality] = {0};

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
  analogWriteResolution(12);
  for (int i = 0; i < quality; i++) {
    points[i] = sin((float)i / (double)quality * 2 * PI) * 2047 + 2047;
  }
}

void analogSineWave() {
  for (int i = 0; i < quality; i++) {
    analogWrite(OUTPUT_PIN, points[i]);
    delayMicroseconds(delta_time_analog);
  }
}

void loop() {
  analogSineWave();
}
