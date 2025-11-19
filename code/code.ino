int aWert;
int amount = 10;
int addierterWert = 0;
int endWert;
void setup() {
  Serial.begin(9600); //Seriellen Monitor initialisieren
}

void loop() {
  
  //Serial.println(aWert); //Analoger Wert im Seriellen Monitor anzeigen
  for (int i = 0; i<amount; i = i+1){ //for loop
    aWert = analogRead(A0); //Varialble mit Analogem Wert updaten
    addierterWert = (addierterWert + aWert); //10 mal werte addieren
    delay(100); //delay bis wieder ausgelesen wird
  }
  
  endWert = (addierterWert / amount); // durchschnitt wird berechnet
  Serial.println(endWert); //print endwert
  addierterWert=0; // wert wieder auf 0 setzen
}
