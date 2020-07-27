// Initial delay 
#define INITIAL_DELAY 10000

// Pin definitions
#define PIN_SENSOR_1 13
#define PIN_SENSOR_2 12
#define PIN_RELAY    11

void setup() {
    pinMode(PIN_SENSOR_1, INPUT);
    pinMode(PIN_SENSOR_2, INPUT);
    pinMode(PIN_RELAY, OUTPUT);
    digitalWrite(PIN_RELAY, LOW);
    delay(INITIAL_DELAY);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_data_1 = digitalRead(PIN_SENSOR_1);
  int sensor_data_2 = digitalRead(PIN_SENSOR_2);
  if (sensor_data_1 == HIGH || sensor_data_2 == HIGH) {
    digitalWrite(PIN_RELAY, LOW);
  } else {
    digitalWrite(PIN_RELAY, HIGH);
  }
  delay(1000);
}