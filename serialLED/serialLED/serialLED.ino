int blue1 = 12;
int blue2 = 11;
int blue3 = 10;
int red1 = 9;
int red2 = 8;


void setup()
{
 pinMode(blue1, OUTPUT);
 pinMode(blue2, OUTPUT);
 pinMode(blue3, OUTPUT);
 pinMode(red1, OUTPUT);
 pinMode(red2, OUTPUT);
 
 Serial.begin(9600);
 while (!Serial);
 Serial.print("Choose from the following:"
 "\n"
 "\n1 Turn LED1 ON \n2 Turn LED1 OFF"
 "\n3 Turn LED2 ON \n4 Turn LED2 OFF"
 "\n5 Turn LED3 ON \n6 Turn LED3 OFF"
 "\n7 Turn LED4 ON \n8 Turn LED4 OFF"
 "\n9 Turn LED5 ON \n10 Turn LED5 OFF"
 );
}


void loop()
{
 if (Serial.available())
 {
  int state = Serial.parseInt();
  if (state == 1)
  {
    digitalWrite(blue1, HIGH);
    Serial.println("Command completed LED1 turned ON");
  }
  if (state == 2)
  {
    digitalWrite(blue2, HIGH);
    Serial.println("Command completed LED2 turned ON");
  }
  if (state == 3)
  {
    digitalWrite(blue3, HIGH);
    Serial.println("Command completed LED3 turned ON");
  }
  if (state == 4)
  {
    digitalWrite(red1, HIGH);
    Serial.println("Command completed LED4 turned ON");
  }
  if (state == 5)
  {
    digitalWrite(red2, HIGH);
    Serial.println("Command completed LED5 turned ON");
  }

  
  if (state == 6)
  {
    digitalWrite(blue1, LOW);
    Serial.println("Command completed LED turned OFF");
  }
  if (state == 7)
  {
    digitalWrite(blue2, LOW);
    Serial.println("Command completed LED turned OFF");
  }
  if (state == 8)
  {
    digitalWrite(blue3, LOW);
    Serial.println("Command completed LED turned OFF");
  }
  if (state == 9)
  {
    digitalWrite(red1, LOW);
    Serial.println("Command completed LED turned OFF");
  }
  if (state == 10)
  {
    digitalWrite(red2, LOW);
    Serial.println("Command completed LED turned OFF");
  }

  
  if (state == 11)
  {
    digitalWrite(blue1, HIGH);
    delay(100);
    digitalWrite(blue2, HIGH);
    delay(100);
    digitalWrite(blue3, HIGH);
    delay(100);
    digitalWrite(red1, HIGH);
    delay(300);
    digitalWrite(blue1, LOW);
    digitalWrite(blue2, LOW);
    digitalWrite(blue3, LOW);
    delay(100);
    digitalWrite(red1, HIGH);
    delay(1300);
  
    digitalWrite(blue1, HIGH);
    delay(100);
    digitalWrite(blue2, HIGH);
    delay(100);
    digitalWrite(blue3, HIGH);
    delay(100);
    digitalWrite(red2, HIGH);
    delay(300);
    digitalWrite(blue1, LOW);
    digitalWrite(blue2, LOW);
    digitalWrite(blue3, LOW);
    delay(100);
    digitalWrite(red2, HIGH);
    delay(600);
  
    digitalWrite(blue1, LOW);
    digitalWrite(blue2, LOW);
    digitalWrite(blue3, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    delay(500);
  
    digitalWrite(blue1, HIGH);
    digitalWrite(blue2, HIGH);
    digitalWrite(blue3, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, HIGH);
    delay(2000);
  
    digitalWrite(blue1, LOW);
    digitalWrite(blue2, LOW);
    digitalWrite(blue3, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    delay(100);
  }

 }
}
