#include <DC_motors.h>
void vooruit(){
  analogWrite(RPWM, speed);
  analogWrite(LPWM, speed);
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, LOW);

  analogWrite(RPWM1, speed);
  analogWrite(LPWM1, speed);
  digitalWrite(R_EN1, HIGH);
  digitalWrite(L_EN1, LOW);
}
void  achteruit() {
  analogWrite(RPWM, speed);
  analogWrite(LPWM, speed);
  digitalWrite(R_EN, LOW);
  digitalWrite(L_EN, HIGH);

  analogWrite(RPWM1, speed);
  analogWrite(LPWM1, speed);
  digitalWrite(R_EN1, LOW);
  digitalWrite(L_EN1, HIGH);
}
void  links() {
  analogWrite(RPWM, speed);
  analogWrite(LPWM, speed);
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, LOW);

  analogWrite(RPWM1, 100);
  analogWrite(LPWM1, 100);
  digitalWrite(R_EN1, HIGH);
  digitalWrite(L_EN1, LOW);
}
void  rechts() {
  analogWrite(RPWM, 100);
  analogWrite(LPWM, 100);
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, LOW);

  analogWrite(RPWM1, speed);
  analogWrite(LPWM1, speed);
  digitalWrite(R_EN1, HIGH);
  digitalWrite(L_EN1, LOW);
}
void  stop() {
  analogWrite(RPWM, speed);
  analogWrite(LPWM, speed);
  digitalWrite(R_EN, LOW);
  digitalWrite(L_EN, LOW);

  analogWrite(RPWM1, speed);
  analogWrite(LPWM1, speed);
  digitalWrite(R_EN1, LOW);
  digitalWrite(L_EN1, LOW);
}

