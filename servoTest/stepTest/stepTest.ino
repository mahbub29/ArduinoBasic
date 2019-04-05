#include <Stepper.h>

const int stepsPerRevolution = 180;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
  myStepper.setSpeed(60);

  Serial.begin(9600);
}


void loop()
{
  myStepper.step(stepsPerRevolution);
  delay(500);

  myStepper.step(-stepsPerRevolution);
  delay(500);
}



