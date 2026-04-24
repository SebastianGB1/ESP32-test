/**
 * Basic ESP32 Blink
 * Parpadea el LED integrado del ESP32 (GPIO 2)
 */

#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("ESP32 Blink Example");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // enciende el LED
  Serial.println("LED ON");
  delay(1000);                   // espera un segundo
  digitalWrite(LED_PIN, LOW);    // apaga el LED
  Serial.println("LED OFF");
  delay(1000);                   // espera un segundo
}