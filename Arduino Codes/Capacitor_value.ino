#include <CapacitiveSensor.h>

CapacitiveSensor cs = CapacitiveSensor(4, 2); // Send pin 4, Receive pin 2

void setup() {
    Serial.begin(9600);
}

void loop() {
    long sensorValue = cs.capacitiveSensor(30); // Number of samples
    Serial.println(sensorValue);
    delay(100);
}