const int sensorPin_1 = A0;
const int sensorPin_2 = A1;
const int sensorPin_3 = A2;
const int sensorPin_4 = A3;
const int sensorPin_5 = A4;

int sensorValue_1 = 0;
int sensorValue_2 = 0;
int sensorValue_3 = 0;
int sensorValue_4 = 0;
int sensorValue_5 = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Reading from the Sensors ...");

}

void loop() {

  sensorValue_1 = analogRead(sensorPin_1);
  sensorValue_1 = map(sensorValue_1,1023,265,0,100);
  sensorValue_2 = analogRead(sensorPin_2);
  sensorValue_2 = map(sensorValue_2,1023,265,0,100);
  sensorValue_3 = analogRead(sensorPin_3);
  sensorValue_3 = map(sensorValue_3,1023,265,0,100);
  sensorValue_4 = analogRead(sensorPin_4);
  sensorValue_4 = map(sensorValue_4,1023,265,0,100);
  sensorValue_5 = analogRead(sensorPin_5);
  sensorValue_5 = map(sensorValue_5,1023,265,0,100);


Serial.print("Moisture Sensor 1: ");
Serial.print(sensorValue_1);
Serial.println("%");
Serial.print("Moisture Sensor 2: ");
Serial.print(sensorValue_2);
Serial.println("%");
Serial.print("Moisture Sensor 3: ");
Serial.print(sensorValue_3);
Serial.println("%");
Serial.print("Moisture Sensor 4: ");
Serial.print(sensorValue_4);
Serial.println("%");
Serial.print("Moisture Sensor 5: ");
Serial.print(sensorValue_5);
Serial.println("%");

delay(5000);
}
