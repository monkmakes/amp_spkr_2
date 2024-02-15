const int SPEAKER_PIN = 9;
const int notes[] = {131, 147, 165, 175, 196, 220, 247};

void setup() {}

void loop() {
  for (int i = 0; i < 7; i++) {
    tone(SPEAKER_PIN, notes[i]);
    delay(80);
  }
  delay(200);
}