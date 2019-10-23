const int ledPin= 11;
const int echoPin= 3;
const int trigPin= 2;
void setup(){
  pinMode(trigPin, OUTPUT); 
  pinMode(ledPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  }
void loop(){
long duration, distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(3);
digitalWrite(trigPin,HIGH);
duration= pulseIn (echoPin,HIGH); 
distance = (duration/2)/29.1;
if (distance<10){
  digitalWrite(ledPin,HIGH);
delay(10000);
digitalWrite(ledPin,LOW);
} 
else{ 
  digitalWrite(ledPin,LOW);
 }
}
