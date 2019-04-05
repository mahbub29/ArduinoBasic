#include <Servo.h>
Servo servo1;

char serialData;
int up = 0;
int down = 180;
int left = 270;
int right = 90;
int ur = 45;
int dr = 135;
int ul = 315;
int dl = 225;


void setup()
{
  servo1.attach(13);
  Serial.begin(9600);
}


void loop()
{
  if(Serial.available() > 0)
  {
    serialData = Serial.read();
    Serial.print(serialData);

    if(serialData == '1') //UP
    {
      servo1.write(up);
    }
    else if(serialData == '2') //U-R
    {
      servo1.write(ur);
    }
    else if(serialData == '3') //RIGHT
    {
      servo1.write(right);
    }
    else if(serialData == '4') //D-R
    {
      servo1.write(dr);
    }
    else if(serialData == '5') //DOWN
    {
      servo1.write(down);
    }
    else if(serialData == '6') //D-L
    {
      servo1.write(dl);
    }
    else if(serialData == '7') //LEFT
    {
      servo1.write(left);
    }
    else if(serialData == '8')//U-L
    {
      servo1.write(ul);
    }
  }
}

