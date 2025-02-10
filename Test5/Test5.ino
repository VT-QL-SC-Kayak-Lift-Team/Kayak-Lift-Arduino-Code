int INpin1 = 10; //motor stuff
int INpin2 = 9; 
int ENApin = 11;

int sensorValue = A0;
int pot;

void setup() {
pinMode(INpin1, OUTPUT);
pinMode(INpin2, OUTPUT);
pinMode(ENApin, OUTPUT);
pinMode(sensorValue,INPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
pot = analogRead(A0);

while (digitalRead(pot) >= 500){
	digitalWrite(IN1pin,HIGH);
	digitalWrite(IN2pin,LOW);
	analogWrite(ENApin,255);

delay(200);
Serial.println(pot)
}
