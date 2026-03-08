const int PIN_LED = 13;
const int PIN_BTN = 12;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BTN, INPUT);
}

void loop()
{
  if (digitalRead(PIN_BTN) == HIGH)
  {
    digitalWrite(PIN_LED, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED, LOW);
  }
}
