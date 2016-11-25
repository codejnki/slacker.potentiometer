# slacker.potentiometer

A utility library for Arduino that gives some easy methods for a potentiometer.

## Installation and useage

To install this library just place the entire folder as a sub folder in to your library folder.  You should just be able to clone this repo and begin using right away.

```cpp
#include <potentiometer.h>

slacker::Potentiometer _pot(0); // use one of the analog in ports

// your awesome code goes here
```

## Methods

```cpp
ReadValue()
```

Returns the current reading from 0-1023.