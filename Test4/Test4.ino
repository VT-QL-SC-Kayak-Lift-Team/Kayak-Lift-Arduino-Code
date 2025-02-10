int INpin1 = 10;
int INpin2 = 9;
int ENApin = 11;

int sensorValue = A0;
int pot;
int potcom;

void setup() {
  // put your setup code here, to run once:
pinMode(INpin1, OUTPUT);
pinMode(INpin2, OUTPUT);
pinMode(ENApin, OUTPUT);
pinMode(sensorValue,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 pot = analogRead(A0);
  potcom = map(pot, 0, 1023, 0, 255);

digitalWrite(INpin1, HIGH);
digitalWrite(INpin2, LOW);
analogWrite(ENApin,potcom);

delay(200);

Serial.println(potcom);
}

