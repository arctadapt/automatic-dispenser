//PROJECT UPRAK DISPENSER OTOMATIS
const int sensorPin = 3; 
const int relayPin = 7;   

void setup() {
  //setup
  pinMode(sensorPin, INPUT);   //sensor sebagai input
  pinMode(relayPin, OUTPUT);   //relay sebagai output
  digitalWrite(relayPin, LOW);  
  Serial.begin(9600);
}

void loop() {
  //logic
  int sensorState = digitalRead(sensorPin);

  Serial.print("Nilai Sensor: ");
  Serial.println(sensorState);

  if (sensorState == LOW) {
    digitalWrite(relayPin, LOW);
    Serial.println("Pompa Menyala");
  } else {
    digitalWrite(relayPin, HIGH);
    Serial.println("Pompa Mati");
  }
  delay(500);
}
