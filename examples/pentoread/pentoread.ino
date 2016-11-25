#include <potentiometer.h>

slacker::Potentiometer _pot(0);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = _pot.Read();

  Serial.println(sensorValue);
  delay(2); 
}

