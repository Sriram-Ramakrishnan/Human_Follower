int p1=12;
int p2=11;
int p3=10;
int p4=9;
int ir=13;

void setup() {
  pinMode(ir, INPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  char control = digitalRead(ir);
  if(control==HIGH){
    digitalWrite(p1,HIGH);
    digitalWrite(p2,LOW);
    digitalWrite(p3,HIGH);
    digitalWrite(p4,LOW);
    delay(2000);
    digitalWrite(p1,LOW);
    digitalWrite(p3,LOW);
    delay(1000);
  }
  else{
    digitalWrite(p1,LOW);
    digitalWrite(p2,LOW);
    digitalWrite(p3,LOW);
    digitalWrite(p4,LOW);
    delay(2000);
  }
}
