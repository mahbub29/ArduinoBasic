#include <Stepper.h>

#define STEPS 32

Stepper myStepper(STEPS, 8, 9, 10, 11);

int val = 90;
int potVal = 0;

void setup()
{
  Serial.begin(9600);
  myStepper.setSpeed(200);
}

void loop()
{
  potVal = map(analogRead(A0),0,1024,0,180);

  if (potVal > 10){
    if(potVal>val+1)
    {
      myStepper.step(1);
      val++;
    } 
    else if(potVal<val-1)
    {
      myStepper.step(-1);
      val--;
    }
  }
  delay(20);
}


