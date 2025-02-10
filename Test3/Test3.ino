int IN1pin = 10; //control pin 1
int IN2pin = 9;	//control pin 2
int ENApin = 11; //speed control
int button1 = 2; //button to make things speed up
int button2 = 7; //button to retract and control second motor


void setup() {
pinMode(IN1pin, OUTPUT);
pinMode(IN2pin, OUTPUT);
pinMode(ENApin, OUTPUT);
pinMode(button1, INPUT); 
pinMode(button2, INPUT);
  
}

void loop() {
  //button first motor slowly speeds up to consistent speed
  //stops after y amount of time
  while (digitalRead(button1)== HIGH){
	digitalWrite(IN1pin,HIGH);
	digitalWrite(IN2pin,LOW);
	analogWrite(ENApin,255);
    delay(30000);    
  }
  //button first motor slowly detracts for x amount of time
  //delay of z seconds
  //second motor turns on
    
  if(digitalRead(button2) == HIGH) {
    digitalWrite(IN1pin,LOW);
    digitalWrite(IN2pin,HIGH);
    analogWrite(ENApin,220);
    delay(1000);    
