// C++ code
//
const int ledpin[]={2,3,4,5,6};
const int numled=5;
void setup()
{
  for(int i=0;i<numled;i++){
  	pinMode(ledpin[i], OUTPUT);  
  }
}
void loop()
{
  for(int i=0;i<numled;i++){
    
      digitalWrite(ledpin[i], HIGH);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(ledpin[i], LOW);
    
  }
  for(int i=numled-1;i>=0;i--){
    
      digitalWrite(ledpin[i], HIGH);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(ledpin[i], LOW);
    
  }
  
}