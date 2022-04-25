int reset;
int num;
int aval;
const int apin = A0;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}
void loop() {
  aval = analogRead(apin);
  Serial.print(" Raw= ");
  Serial.print(aval);
  num = map(aval,0,1023,0,90);
  Serial.print(" Num= ");
  Serial.println(num);
  if (num==45){
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
  }
  else {
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
  }
}
