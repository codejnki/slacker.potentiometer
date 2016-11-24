/*
  potentiometer.h - Library for controlling a potentiometer
  Created by Patrick Stockton
*/

#ifndef potentiometer_h
#define potentiometer_h

#include "Arduino.h"

class Potentiometer
{
  public:
    Potentiometer(int pin);
    int Read();
  private:
    int _pin;
};

#endif