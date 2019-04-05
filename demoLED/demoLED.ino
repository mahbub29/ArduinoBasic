/*
 * Mahbub's First Program
 */

int blue1 = 12;
int blue2 = 11;
int blue3 = 10;
int red1 = 9;
int red2 = 8;

void setup()
{
  //initialise pins as output
  pinMode(blue1, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop()
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

