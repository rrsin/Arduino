//Initialize the 5 Moisture Sensor Pins

const int sensorPin_1 = A0;
const int sensorPin_2 = A1;
const int sensorPin_3 = A2;
const int sensorPin_4 = A3;
const int sensorPin_5 = A4;

//Initialize the 5 sets of LEDs - STILL NEED TO ADJUST PIN NUMBERS
int greenPin_1 = 1;
int yellowPin_1 = 2;

int greenPin_2 = 3;
int yellowPin_2 = 4;

int greenPin_3 = 5;
int yellowPin_3 = 6;

int greenPin_4 = 7;
int yellowPin_4 = 8;

int greenPin_5 = 9;
int yellowPin_5 = 10;


//Initialize the 5 Moisture Sensore readings
int sensorValue_1 = 0;
int sensorValue_2 = 0;
int sensorValue_3 = 0;
int sensorValue_4 = 0;
int sensorValue_5 = 0;


void setup() {
  // Initialize Serial Monitor
Serial.begin(9600);
Serial.println("Reading from the Sensors ...");

}

void loop() { 

  sensorValue_1 = analogRead(sensorPin_1);
  sensorValue_1 = map(sensorValue_1,1023,265,0,100); // map the sensor readings to a 0-100% scale, requires calibration of the lowest and highest expected measurements by the sensor
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

delay(3000); //Wait between measurements
}
