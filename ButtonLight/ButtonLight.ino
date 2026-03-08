const int portR = 6;
const int portG = 5;
const int portB = 3;
const int time = 100;
double R = 3.0;
double G = 0.0;
double B = 0.0;

double* p = &G;
double d = 0.1;


void setup()
{
  pinMode(portR, OUTPUT);
  pinMode(portG, OUTPUT);
  pinMode(portB, OUTPUT);
}

void loop()
{
  digitalWrite(portR, R);
  digitalWrite(portG, G);
  digitalWrite(portB, B);
  delay(ti me);
  *p += d;
  if (*p > 3)
  {
    if (p == &G )
  }



  while(R < 3)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    R += 0.1;
  }
  while(G < 3)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    G += 0.1;
  }
  while(R > 0)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    R -= 0.1;
  }
  while(B < 3)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    B += 0.1;
  }
  while(G > 0)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    G -= 0.1;
  }
  while(R < 3)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    R += 0.1;
  }
  while(B > 0)
  {
    delay(time);
    digitalWrite(portR, R);
    digitalWrite(portG, G);
    digitalWrite(portB, B);
    B -= 0.1;
  }
}

