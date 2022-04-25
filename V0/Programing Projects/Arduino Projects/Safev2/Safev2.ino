int aval;
int numval;
int resetval;
const int resetpin = 3;
const int combled1 = 8;
const int combled2 = 9;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(resetpin,INPUT);
  pinMode(combled1,OUTPUT);
  pinMode(combled2,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop() {
  aval = analogRead(A0);
  numval = map(aval,0,1023,0,80);
  Serial.print(" Aval= ");
  Serial.print(aval);
  Serial.print(" Numval= ");
  Serial.println(numval);
  resetval = digitalRead(resetpin);
  if (numval==20) {
    digitalWrite(combled1,HIGH);
  }
  else if (numval==6){
    digitalWrite(combled2,HIGH);
  }
  else if (resetpin==HIGH){
    digitalWrite(combled1,LOW);
    digitalWrite(combled2,LOW);
  }
  
}
