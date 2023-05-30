#include <sensors.h>

long duration1, duration2, duration3, duration4;
int distance1, distance2, distance3, distance4;

int getDistance(int TRIG, int ECHO) {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2;

  return distance;

}


void sensors(){

  // Lees de afstand van de eerste sensor
  distance1 = getDistance(TRIG1, ECHO1);
  // Lees de afstand van de tweede sensor
  distance2 = getDistance(TRIG2, ECHO2);
  // Lees de afstand van de derde sensor
  distance3 = getDistance(TRIG3, ECHO3);
  // Lees de afstand van de vierde sensor
  distance4 = getDistance(TRIG4, ECHO4);
  // Toon de gemeten afstanden in de seriële monitor
  Serial.print("Sensor 1: ");
  Serial.print(distance1);
  Serial.print(" cm");

  Serial.print(" Sensor 2: ");
  Serial.print(distance2);
  Serial.print(" cm");

  Serial.print(" Sensor 3: ");
  Serial.print(distance3);
  Serial.print(" cm");

  Serial.print(" Sensor 4: ");
  Serial.print(distance4);
  Serial.println(" cm");

  // Wacht een korte periode voordat de meting opnieuw wordt uitgevoerd
  delay(200);


    if (distance1 > 30 && distance2 > 30 && distance3 > 30 && distance4 > 30) {
        vooruit();
    }
    else if (distance1 < 30 && distance2 > 30 && distance3 > 30 && distance4 > 30) {
        rechts();
    }
    else if (distance1 > 30 && distance2 > 30 && distance3 > 30 && distance4 < 30){
        links();
    }
    else if (distance1 > 30 && distance2 < 30 && distance3 < 30 && distance4 > 30){
        achteruit();
    }

    

}
