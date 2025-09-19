int SENSOR_PIN = A0;
int sumValue;
int sensorValue;
int sensorValues[8];

void setup() {
  Serial.begin(9600);
  for (int i = 10; i >= 2; i--) {
    pinMode(i, OUTPUT);
  }
} 

void loop() {
  for (int i = 0; i < 8; i++) {
    sensorValues[i] = analogRead(SENSOR_PIN);
    delay(100);
  }

  sumValue = 0;
  for (int i = 0; i < 8; i++) {
    Serial.println(sensorValues[i]);
    sumValue += sensorValues[i];
  }
  sensorValue = sumValue / 8;

  for (int i = 2; i <= 10; i++) {
    digitalWrite(i, LOW);
  }
  if (165 <= sensorValue && sensorValue < 170) {
    digitalWrite(10, HIGH);
  } else if (170 <= sensorValue && sensorValue < 175) {
    for (int i = 9; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (175 <= sensorValue && sensorValue < 180) {
    for (int i = 8; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (180 <= sensorValue && sensorValue < 185) {
    for (int i = 7; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (185 <= sensorValue && sensorValue < 190) {
    for (int i = 6; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (190 <= sensorValue && sensorValue < 195) {
    for (int i = 5; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (195 <= sensorValue && sensorValue < 200) {
    for (int i = 4; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (200 <= sensorValue && sensorValue < 205) {
    for (int i = 3; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  } else if (205 <= sensorValue) {
    for (int i = 2; i <= 10; i++) {
      digitalWrite(i, HIGH);
    }
  }
}