#include <Servo.h>
#include <Adafruit_CircuitPlayground.h>
#include <Adele_Robot.h>

void setup(){
  CircuitPlayground.begin();
  adeleBegin();
}

void loop(){
  forward();
  delay(1000);
  left();
  delay(500);
  right();
  delay(500);
  stay();
  delay(500);
}
