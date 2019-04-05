char serialData;
int b1 = 12;
int b2 = 11;
int b3 = 10;
int r1 = 9;
int r2 = 8;

void setup()
{
  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0)
  {
    serialData = Serial.read();
    Serial.print(serialData);

    if(serialData == '1')
    {
      digitalWrite(b1,HIGH);
    }
    else if(serialData == '0')
    {
      digitalWrite(b1,LOW);
    }

    else if(serialData == '2')
    {
      digitalWrite(b2,HIGH);
    }
    else if(serialData == '3')
    {
      digitalWrite(b2,LOW);
    }

    else if(serialData == '4')
    {
      digitalWrite(b3,HIGH);
    }
    else if(serialData == '5')
    {
      digitalWrite(b3,LOW);
    }

    else if(serialData == '6')
    {
      digitalWrite(r1,HIGH);
    }
    else if(serialData == '7')
    {
      digitalWrite(r1,LOW);
    }

    else if(serialData == '8')
    {
      digitalWrite(r2,HIGH);
    }
    else if(serialData == '9')
    {
      digitalWrite(r2,LOW);
    }

        if(serialData == 't')
    {
      digitalWrite(b1,HIGH);
      digitalWrite(b2,HIGH);
      digitalWrite(b3,HIGH);
      digitalWrite(r1,HIGH);
      digitalWrite(r2,HIGH);
    }
    else if(serialData == 'n')
    {
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      digitalWrite(r1,LOW);
      digitalWrite(r2,LOW);
    }

    else if(serialData == 'a')
    {
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      digitalWrite(r1,LOW);
      digitalWrite(r2,LOW);
      
      digitalWrite(b1, HIGH);
      delay(100);
      digitalWrite(b2, HIGH);
      delay(100);
      digitalWrite(b3, HIGH);
      delay(100);
      digitalWrite(r1, HIGH);
      delay(300);
      digitalWrite(b1, LOW);
      digitalWrite(b2, LOW);
      digitalWrite(b3, LOW);
      delay(100);
      digitalWrite(r1, HIGH);
      delay(1300);
    
      digitalWrite(b1, HIGH);
      delay(100);
      digitalWrite(b2, HIGH);
      delay(100);
      digitalWrite(b3, HIGH);
      delay(100);
      digitalWrite(r2, HIGH);
      delay(300);
      digitalWrite(b1, LOW);
      digitalWrite(b2, LOW);
      digitalWrite(b3, LOW);
      delay(100);
      digitalWrite(r2, HIGH);
      delay(600);
    
      digitalWrite(b1, LOW);
      digitalWrite(b2, LOW);
      digitalWrite(b3, LOW);
      digitalWrite(r1, LOW);
      digitalWrite(r2, LOW);
      delay(500);
    
      digitalWrite(b1, HIGH);
      digitalWrite(b2, HIGH);
      digitalWrite(b3, HIGH);
      digitalWrite(r1, HIGH);
      digitalWrite(r2, HIGH);
      delay(2000);
    
      digitalWrite(b1, LOW);
      digitalWrite(b2, LOW);
      digitalWrite(b3, LOW);
      digitalWrite(r1, LOW);
      digitalWrite(r2, LOW);
      delay(100);
    }
  }
}

