const int pinLed = 13;
const int pinBtn = 12;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBtn, INPUT);
}

void loop()
{
  digitalWrite(pinLed, digitalRead(pinBtn) == HIGH ? LOW : HIGH);
}
