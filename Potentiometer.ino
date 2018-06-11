const int sensorPin = A0;
const int ledPin = 13;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  digitalWrite(ledPin,HIGH);
  delay(sensorValue);
  digitalWrite(ledPin,LOW);
  delay(sensorValue);
}
