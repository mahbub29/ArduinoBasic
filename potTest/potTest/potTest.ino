#include <Servo.h>
Servo servo1;

int potPin = 1;

int blue1 = 12;
int blue2 = 11;
int blue3 = 10;
int red1 = 9;
int red2 = 8;

int val = 0; //variable to store the value coming from the sensor

void setup()
{
  servo1.attach(3);
    
  pinMode(blue1, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}


void led_loop()
{
  val = analogRead(potPin);
  
  digitalWrite(blue1, HIGH);
  digitalWrite(blue2, HIGH);
  digitalWrite(blue3, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  delay(val);
  digitalWrite(blue1, LOW);
  digitalWrite(blue2, LOW);
  digitalWrite(blue3, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  delay(val);
}

void servo_loop()
{
  val = analogRead(potPin);
  val = map(val, 0, 1000, 0, 180);
  servo1.write(val);
  delay(10);
}

void loop()
{
  led_loop();

  servo_loop();
}

