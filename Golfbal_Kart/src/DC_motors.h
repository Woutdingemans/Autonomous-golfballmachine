#ifndef DC_motors_h
#define DC_motors_h
#include <Arduino.h>

extern int speed;
//rechtse motor
extern int RPWM;
extern int LPWM;
extern int R_EN;//achteruit
extern int L_EN; //vooruit
//linkse motor
extern int RPWM1;
extern int LPWM1;
extern int R_EN1; //achteruit
extern int L_EN1; //vooruit
void vooruit();
void achteruit();
void links();
void rechts();
void stop();
#endif