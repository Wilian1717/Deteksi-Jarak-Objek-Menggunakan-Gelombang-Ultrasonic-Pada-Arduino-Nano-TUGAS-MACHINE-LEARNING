long duration; 
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT); 
  pinMode(11, INPUT); 
}
    
void loop() {
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
 
  duration = pulseIn(11, HIGH);
  distance= duration*0.034/2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500);
}
