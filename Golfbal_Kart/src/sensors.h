#ifndef IR_sensors_h
#define IR_sensors_h
#include <Arduino.h>

extern int IR1;
extern int IR2;
extern int IR3;
extern int IR4;
extern int ECHO1;
extern int TRIG1;
extern int ECHO2;
extern int TRIG2;
extern int ECHO3;
extern int TRIG3;
extern int ECHO4;
extern int TRIG4;

void sensors();
void vooruit();
void achteruit();
void links();
void rechts();
void stop();

#endif
