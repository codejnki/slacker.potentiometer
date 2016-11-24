#include "Arduino.h"
#include "potentiometer.h"

Potentiometer::Potentiometer(int pin)
{
  _pin = pin;
}

Potentiometer::Read()
{
  return analogRead(_pin);
}