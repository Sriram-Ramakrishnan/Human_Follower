void setup() {
  // put your setup code here, to run once:
  
  pinMode(3,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool a;
  a = digitalRead(3);

  if (a==1){
    Serial.println("Off");
    delay(1000);
  }
  
  if (a==0){
    Serial.println("On");
    delay(1000);
  }

}
