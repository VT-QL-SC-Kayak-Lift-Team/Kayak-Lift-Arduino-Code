int IN1pin = 8;
int IN2pin = 7;
int ENApin = 9;

void setup() {
pinMode(IN1pin, OUTPUT);
pinMode(IN2pin, OUTPUT);
pinMode(ENApin, OUTPUT);

}

void loop() {


digitalWrite(IN1pin,HIGH);
digitalWrite(IN2pin,LOW);
analogWrite(ENApin,220);

delay(1000);


}
