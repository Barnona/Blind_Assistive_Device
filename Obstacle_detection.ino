const int trigPin = 10;
const int echoPin = 9;
const int buzzer = 11;
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;

  if (distance <= 30){
    digitalWrite(buzzer, HIGH);
    delay(200);
  }
  else{
    digitalWrite(buzzer, LOW);
  }

}
