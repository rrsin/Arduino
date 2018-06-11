int sensorPin = A0;
int greenPin = 12;
int yellowPin = 11;
int redPin = 10;

int sensorValue = 0;


void setup() {
  // put your setup code here, to run once:

pinMode(greenPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);

// Initialize serial monitor
Serial.begin(9600);
Serial.println("Reading from the Sensors ...");

}

void loop() {

  sensorValue_1 = analogRead(sensorPin);
  sensorValue_1 = map(sensorValue_1,1023,265,0,100);

   if (sensorValue_1 >= 70) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalRead(redPin,LOW);
  } else if (sensorValue_1 >= 40) {
      digitalWrite(greenPin, LOW);
      digitalWrite(yellowPin, HIGH);
      digitalRead(redPin,LOW);
  } else {
      digitalWrite(greenPin, LOW);
      digitalWrite(yellowPin, LOW);
      digitalRead(redPin,HIGH);
  }

  
  Serial.print("Moisture Sensor 1: ");
  Serial.print(sensorValue_1);
  Serial.println("%");


delay(5000);
}


