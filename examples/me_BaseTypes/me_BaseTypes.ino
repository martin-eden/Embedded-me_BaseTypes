// [me_BaseTypes] compilation test

/*
  Author: Martin Eden
  Last mod.: 2024-05-17
*/

#include <me_BaseTypes.h>

void setup()
{
  TUint_4 SerialSpeed = 57600;

  Serial.begin(SerialSpeed);

  Serial.println("[me_BaseTypes] Library reachable.");
}

void loop()
{
}

/*
  2024-05-17
*/
