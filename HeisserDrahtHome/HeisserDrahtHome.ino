const int pinLed = 13;
const int pinBtn = 12;

size_t counter = 0;
bool isTouching = false;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBtn, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(pinBtn) == LOW)
  {
    if (!isTouching)
    {
      ++counter;
      Serial.println(counter);
      delay(300);
    }
      isTouching = true;
    digitalWrite(pinLed, HIGH);
  }
  else
  {
    isTouching = false;
    digitalWrite(pinLed, LOW);
  }
}
