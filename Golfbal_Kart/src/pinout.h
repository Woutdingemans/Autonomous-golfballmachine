#ifndef pinout_h
#define pinout_h
#include <Arduino.h>

char Incoming_value = 0;

//Motoren
//rechtse motor
int RPWM = 6;
int LPWM = 7;
int R_EN = 9; //achteruit
int L_EN = 8; //vooruit
//linkse motor
int RPWM1 = 3;
int LPWM1 = 2;
int R_EN1 = 4; //achteruit
int L_EN1 = 5; //vooruit

int speed = 220;//snelheid van de motoren

//JSN-SR04M
int TRIG1 = 28;
int ECHO1 = 29;

int TRIG2 = 30;
int ECHO2 = 31;

int TRIG3 = 32;
int ECHO3 = 33;

int TRIG4 = 34;
int ECHO4 = 35;

//IR-Sensors
int IR1 = 23;
int IR2 = 24;
int IR3 = 25;
int IR4 = 26;

int Volt_sensor = A0;

int buzzer = 10;



#endif