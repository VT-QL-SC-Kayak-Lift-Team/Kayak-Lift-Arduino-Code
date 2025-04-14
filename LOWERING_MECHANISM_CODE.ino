const int buttPIN1 = 2; // button - lowering motor forward direction
const int buttPIN2 = 3; // button - lowering motor reverse direction
const int motPINF = 5; // lowering motor to spin forward
const int motPINR = 6; // lowering motor to spin reverse

const int buttPIN3 = 4; // button - winch DOWN
const int buttPIN4 = 7; // button - winch UP
int winchPINF = 9;
int winchPINR = 10; 

int state1; // state variable for lowering forward
int state2; // state variable for lowering reverse

int state3; // state variable for winch DOWN
int state4; // state variable fir winch UP

void setup() {
  // put your setup code here, to run once:
pinMode(motPINF,OUTPUT);
pinMode(motPINR,OUTPUT);
pinMode(buttPIN1,INPUT_PULLUP);
pinMode(buttPIN2,INPUT_PULLUP);

pinMode(winchPINF,OUTPUT);
pinMode(winchPINR,OUTPUT);
pinMode(buttPIN3,INPUT_PULLUP);
pinMode(buttPIN4,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  state1 = digitalRead(buttPIN1);
  state2 = digitalRead(buttPIN2);
  state3 = digitalRead(buttPIN3);
  state4 = digitalRead(buttPIN4);
// Forward Direction Lowering Motor
if (state1 == LOW){
  digitalWrite(motPINF,LOW);
  delay(4000);
  digitalWrite(motPINF,HIGH);
}
  else {
    digitalWrite(motPINF,HIGH);
  }

// Reverse Direction Lowering Motor
if (state2 == LOW){
  digitalWrite(motPINR,LOW);
  delay(4000);
  digitalWrite(motPINR,HIGH);
}
 else {
  digitalWrite(motPINR,HIGH);
 }


 // Forward Direction Winch Motor
if (state3 == LOW){
  analogWrite(winchPINF,200); // runs the winch motor at a lower speed for safer use ( 175 / 255 )
  delay(4000);
  analogWrite(winchPINF,0);
}
 else {
  analogWrite(winchPINF,0);
 }

  // Reverse Direction Winch Motor
if (state4 == LOW){
  analogWrite(winchPINR,200);
  delay(4000);
  analogWrite(winchPINR,0);
}
 else {
  analogWrite(winchPINR,0);
 }
}

  