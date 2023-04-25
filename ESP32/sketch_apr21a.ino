int LED_TARJ_ESP32 = 2;

void setup() {
  pinMode(LED_TARJ_ESP32, OUTPUT);
}

void loop() {
  digitalWrite(LED_TARJ_ESP32, HIGH);
  delay(500);
  digitalWrite(LED_TARJ_ESP32, LOW);
  delay(100);
}
