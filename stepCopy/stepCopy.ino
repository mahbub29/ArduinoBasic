#include <Stepper.h>

const int stepsPerRevolution = 18;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
  myStepper.setSpeed(500);
}


void loop()
{

  
  myStepper.step(100);
  delay(500);

  myStepper.step(-100);
  delay(500);
}


