int smoke_sensor=0;
void setup(){
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}
void loop(){
  smoke_sensor=analogRead(A0);
  Serial.println(smoke_sensor);
  if(smoke_sensor>=600){
    digitalWrite(5,HIGH);
  }
  else{
    digitalWrite(5,LOW);
  }
  if(smoke_sensor>=700){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
  delay(10);
}