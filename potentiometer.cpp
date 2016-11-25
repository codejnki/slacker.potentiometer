#include "Arduino.h"
#include "potentiometer.h"

namespace slacker
{
  Potentiometer::Potentiometer(int pin)
  {
    _pin = pin;
  }

  Potentiometer::ReadValue()
  {
    return analogRead(_pin);
  }
}