/*
  NEC PC-9801 boot sound on Arduino
  Connect buzzer on pin 12.
*/

int _pin = 12;

void setup() {
  pinMode(_pin, OUTPUT);
}

void loop() {
  delay(1000);
  tone(_pin, 2000, 120);
  delay(120);
  tone(_pin, 1000, 120);

  while(1);
}
