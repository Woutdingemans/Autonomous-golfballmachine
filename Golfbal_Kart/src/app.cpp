#include <app.h>
void app(){

    if(Serial.available() > 0)  
    {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");
    }

  if (Incoming_value == '1'){
  vooruit();
  }
  else if (Incoming_value == '2'){
    achteruit();
  }
  else if (Incoming_value == '3'){
    links();
  }
  else if (Incoming_value == '4'){
    rechts();
  }
  else if (Incoming_value == '5'){
    stop();
  }
  else{
    stop();
  }

}















