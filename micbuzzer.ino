void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//mic output to console.
  pinMode(7,OUTPUT);//buzzer init.
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int micsensor= analogRead(A0);
  Serial.println(micsensor);
  if(micsensor> 61){
  digitalWrite(7,HIGH);
  delay(3000);
  }else{
  digitalWrite(7,LOW);
  delay(500);
  }
  delay(1000);

}
