int led0 = 17;
int led1 = 39;
int pled = 40;

void setup()
{
  // put your setup code here, to run once:
  pinMode(pled, OUTPUT);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(pled,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led0,HIGH);
  delay(3000);
  digitalWrite(led0,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(pled,LOW);
  delay(3000);
}


