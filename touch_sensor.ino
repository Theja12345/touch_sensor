void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
}

void loop() {
  int val=digitalRead(7);
  Serial.println(val);
  if(val==1){
    digitalWrite(6,HIGH);
  }
  else{
    digitalWrite(6,LOW);
  }
}
