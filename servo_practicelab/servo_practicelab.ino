//C++ code
//
#include <Servo.h>
Servo arm;
int pos = 0;
int LED = 13;

void setup(){
  pinMode(LED, OUTPUT);
  arm.attach(9);
  pos = 90;
  arm.write(pos);
  delay(3000);
}

void loop(){
  digitalWrite(LED, HIGH);
  pos = 0;
  arm.write(pos);
  delay(2000);
  digitalWrite(LED, LOW);
  pos = 159;
  arm.write(pos);
  delay(2000);
}
