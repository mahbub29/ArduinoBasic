#include <Stepper.h>

#define STEPS 32

Stepper myStepper(STEPS, 8, 9, 10, 11);

int val = 0;
int potVal = 0;

void setup()
{
  Serial.begin(9600);
  myStepper.setSpeed(200);
}

voidloop()
{
  potVal = map(analogRead(A0),0,1024,0,500);
  if(potVal>val)
  {
    stepper.step(5);
  }
  if(potVal<val)
  {
    stepper.step(-5);
  }

  val = potVal;
}


