/*This skech measures soil moisture and displays it in a colour sclae via LEDs:
 * Moisture >=70% -> Green Light
 * 70% > Moisture >= 40% -> Green + Yellow Light
 *  Moisture < 40% -> Yellow Light
 *  
 *  Sketch is verified and works but sensor calibration is still required
 */


//Initialize the 5 Moisture Sensor Pins

const int sensorPin_1 = A0;
const int sensorPin_2 = A1;
const int sensorPin_3 = A2;
const int sensorPin_4 = A3;
const int sensorPin_5 = A4;

//Initialize the 5 sets of LEDs
int greenPin_1 = 2;
int yellowPin_1 = 3;

int greenPin_2 = 4;
int yellowPin_2 = 5;

int greenPin_3 = 6;
int yellowPin_3 = 7;

int greenPin_4 = 8;
int yellowPin_4 = 9;

int greenPin_5 = 10;
int yellowPin_5 = 11;


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

//Light logic for Sensor 1
  if (sensorValue_1 >= 70) {
    digitalWrite(greenPin_1, HIGH);
    digitalWrite(yellowPin_1, LOW);
  } else if (sensorValue_1 >= 40) {
    digitalWrite(greenPin_1, HIGH);
    digitalWrite(yellowPin_1, HIGH);
  } else {
    digitalWrite(greenPin_1, LOW);
    digitalWrite(yellowPin_1, HIGH);
  }

//Light logic for Sensor 2
  if (sensorValue_2 >= 70) {
    digitalWrite(greenPin_2, HIGH);
    digitalWrite(yellowPin_2, LOW);
  } else if (sensorValue_2 >= 40) {
    digitalWrite(greenPin_2, HIGH);
    digitalWrite(yellowPin_2, HIGH);
  } else {
    digitalWrite(greenPin_2, LOW);
    digitalWrite(yellowPin_2, HIGH);
  }

  //Light logic for Sensor 3
  if (sensorValue_1 >= 70) {
    digitalWrite(greenPin_3, HIGH);
    digitalWrite(yellowPin_3, LOW);
  } else if (sensorValue_3 >= 40) {
    digitalWrite(greenPin_3, HIGH);
    digitalWrite(yellowPin_3, HIGH);
  } else {
    digitalWrite(greenPin_3, LOW);
    digitalWrite(yellowPin_3, HIGH);
  }

  //Light logic for Sensor 4
  if (sensorValue_4 >= 70) {
    digitalWrite(greenPin_4, HIGH);
    digitalWrite(yellowPin_4, LOW);
  } else if (sensorValue_4 >= 40) {
    digitalWrite(greenPin_4, HIGH);
    digitalWrite(yellowPin_4, HIGH);
  } else {
    digitalWrite(greenPin_4, LOW);
    digitalWrite(yellowPin_4, HIGH);
  }

//Light logic for Sensor 5
  if (sensorValue_1 >= 70) {
    digitalWrite(greenPin_5, HIGH);
    digitalWrite(yellowPin_5, LOW);
  } else if (sensorValue_5 >= 40) {
    digitalWrite(greenPin_5, HIGH);
    digitalWrite(yellowPin_5, HIGH);
  } else {
    digitalWrite(greenPin_5, LOW);
    digitalWrite(yellowPin_5, HIGH);
  }


//Serial Monitor prints for checking and debugging
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
