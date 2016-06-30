//  Simply turn a relay on or off


int DigOutPin=4;

void setup()
{
  pinMode(DigOutPin,OUTPUT);
}

void loop()
{
 digitalWrite(DigOutPin,LOW);
}

