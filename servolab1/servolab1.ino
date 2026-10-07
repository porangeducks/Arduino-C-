#include <Servo.h> // Import Servo Library
// create servo object to control a servo
// my_servo can be any name. 
// Twelve servo objects can be on most Arduino boards
Servo my_servo; 
int pos = 0; // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  my_servo.attach(9);
  pos = 0;
  my_servo.write(pos);
  delay(1000);

  while(true){
    pos = 0;
    my_servo.write(pos);
    delay(1000);
    pos = 90;
    my_servo.write(pos);
    delay(1000);
    pos = 180;
    my_servo.write(pos);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
