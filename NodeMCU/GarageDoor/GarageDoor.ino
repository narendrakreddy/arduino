// set pin numbers:
const int door1Pin = 4;          // the number of the Door pins
const int door2Pin = 5;
const int sensor1Pin =  10;      // the number of the Sensor pins
const int sensor2Pin =  13;

int sensor1State = HIGH;         // variable for reading the sensor status
int sensor2State = HIGH;

int door1Event;
int door2Event;

void setup() {
  // initialize the Door pins as output:
  pinMode(door1Pin, OUTPUT);
  pinMode(door2Pin, OUTPUT);
  // initialize the Sensor pins as input:
  pinMode(sensor1Pin, INPUT);
  pinMode(sensor2Pin, INPUT);

}

void loop() {
  // read the state of the pushbutton value:
  sensor1State = digitalRead(sensor1Pin);
  sensor2State = digitalRead(sensor2Pin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (sensor1State == HIGH) {
    digitalWrite(door1Pin, LOW);
  } 
  else {
   digitalWrite(door1Pin, HIGH);
  }
}


