const int dry_threshold = 800;
const int wet_threshold = 300;
int moisture_sensor=0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  moisture_sensor = analogRead(A0);
  Serial.println(moisture_sensor);
  if(moisture_sensor >= dry_threshold){
  	digitalWrite(13, HIGH);
  	Serial.println("Dry");
  }
  else if(moisture_sensor <= wet_threshold) {
  	digitalWrite(13, LOW);
  	Serial.println("Wet");
  }
  else
    Serial.println("Moist");
  delay(10); 
}