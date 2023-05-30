#include <spanningsmeter.h>

void spanningsmeter() {

  int sensorValue = analogRead(Volt_sensor);  // Lees de spanning van de analoge ingang
  float voltage = sensorValue * (90.0 / 1023.0);  // Converteer de analoge waarde naar spanning (5V referentie)

  Serial.print("Voltage: ");
  Serial.print(voltage, 2);  // Druk de spanning af met 2 decimalen
  Serial.println(" V");

}