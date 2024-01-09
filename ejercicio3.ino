const int leds = 8;
int ledPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; 

void setup() {
  for (int i = 0; i < leds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
void loop() {
  secuenciaNormal();
  delay(1000);  // Esperar 1 segundo entre secuencias
  secuenciaReversa();
  delay(1000);
  }

void secuenciaNormal() {
  for (int i = 0; i < leds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
