//Constants
const int photoPin = A0;
const int ledPin = 9;

//Variables
int photoValue;

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);  
  pinMode(photoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  photoValue = analogRead(photoPin);
  Serial.print("Photoresistor value ");
  Serial.println(photoValue);
  if (photoValue > 100) {
    digitalWrite(ledPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
  }
  delay(1000);
}
