const int SensorPin = A0;
const float resistorValue = 2000.0; // 2kΩ



void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(SensorPin);
  float voltage = sensorValue*(5.0/1023.0); // Convert ADC value to voltage
  float current = (5-voltage) / resistorValue;

  Serial.print(current * 1e6, 5); // Convert to µA
  Serial.println(" µA");
  
delay(500);
}
