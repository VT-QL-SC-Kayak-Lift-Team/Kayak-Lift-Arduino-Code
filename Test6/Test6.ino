
int sensorValue = A0;
int pot;

void setup() {
pinMode(sensorValue,INPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
pot = analogRead(A0);

if (digitalRead(pot) >= 500){
  Serial.println(pot);
}
else{
  Serial.println(pot);

}

delay(200);
}



