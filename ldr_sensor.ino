const int buzzerPin = 3;
const int ldrPin = A0;
void setup () {
Serial.begin(9600);
pinMode(buzzerPin, OUTPUT);
pinMode(ldrPin, INPUT); }
void loop() {
int ldrStatus = analogRead(ldrPin);
if (ldrStatus >= 100) { 
tone(buzzerPin, 100);
delay(100);
noTone(buzzerPin);
delay(100);
}
else {noTone(buzzerPin); 
}
}
