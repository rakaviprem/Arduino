const int sensor_pin = A1;  /* Soil moisture sensor O/P pin */
void setup() {
  Serial.begin(9600); /* Define baud rate for serial communication */
}

void loop() {
  float mp;
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  mp = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  Serial.print("Moisture Percentage = ");
  Serial.print(mp);
  Serial.print("%\n\n");
  int b=7;
  if(mp<=10)
  {
    
    pinMode(b,OUTPUT);
    tone(b,200);
    delay(200);
//    noTone(b,1000);
  }
  else if(mp>15)
  {
    noTone(b);
  }
  delay(5000);
}
