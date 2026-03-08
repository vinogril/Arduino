//A4_1_LED_Zeit_Luecke.ino
//Pins
const int ledPin = 12;
const int ledTaster = 11;


// Variablen
int ledEin = 0;

// Variablen für die Zeitmessung
unsigned long 
unsigned long 
bool 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledTaster, INPUT); 
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  ledEin = digitalRead();
  if (ledEin ==    && zeitMessungAktiv == false){
    startZeit = millis();
    Serial.print("Startzeit: ");
    Serial.print(startZeit);
    Serial.println("  ms");
     = true;
  }
  
  while (ledEin == HIGH && zeitMessungAktiv == true){
    digitalWrite(ledPin, HIGH);

  }

  if (ledEin == LOW && zeitMessungAktiv == true) {
    digitalWrite(ledPin, LOW);
     millis() - startZeit;
    Serial.print("Leuchtdauer: ");
    Serial.print(dauer);
    Serial.println("  ms");
    zeitMessungAktiv = false
    }   
}
