const byte sensorPins[4] = {A3, A2, A1, A0};
const byte motorPins[4] = {6, 7, 8, 9};
const byte threshold[4] = {1010, 1000, 456, 789};

void setup() {
  for (byte i = 0; i < 3; i++) {
    pinMode(sensorPins[i], INPUT); 
  }
   for (byte i = 0; i < 3; i++) {
    pinMode(motorPins[i], OUTPUT); 
  }
  Serial.begin(9600);
}

void loop() {
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  //measures sensors, 
  for (byte i = 0; i < 4; i++) {
    //if (analogRead(sensorPins[i]) > threshold[i]){ 
      digitalWrite(motorPins[i], HIGH);
      Serial.println(i);
      delay(500);
      Serial.println(analogRead(sensorPins[i]));
      //Serial.println(digitalRead(motorPins[i]));
    //}
  }

}
