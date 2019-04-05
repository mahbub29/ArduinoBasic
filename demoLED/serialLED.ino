int blue1 = 12;
int blue2 = 11;
int blue3 = 10;
int red1 = 9;
int red2 = 8;


void setup()
{
 pinMode(blue1, OUTPUT);
 Serial.begin(9600);
 while (!Serial);
 Serial.println("Input 1 to turn LED ON and 2 to turn LED OFF"): 
}


void loop()
{
 if (Serial.available())
 {
  int state = Serial.parseInt();
  if (state == 1)
  {
    digitalWrite(blue1, HIGH);
    Serial.println("Command completed LED turned ON");
  }
  if (state == 2)
  {
    digitalWrite(blue1, LOW);
    Serial.println("Command completed LED turned OFF");
  }
 }
}
