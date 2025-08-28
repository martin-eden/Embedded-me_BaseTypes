// [me_BaseTypes] compilation test

/*
  Author: Martin Eden
  Last mod.: 2025-08-24
*/

#include <me_BaseTypes.h>

void CompilationTest()
{
  [[gnu::unused]] TBool Bool;
  [[gnu::unused]] TUint_1 Uint_1;
  [[gnu::unused]] TUint_2 Uint_2;
  [[gnu::unused]] TUint_4 Uint_4;
  [[gnu::unused]] TSint_1 Sint_1;
  [[gnu::unused]] TSint_2 Sint_2;
  [[gnu::unused]] TSint_4 Sint_4;
  [[gnu::unused]] TFloat Float;
  [[gnu::unused]] TAsciiz Asciiz;

  [[gnu::unused]] TUint_1 Uint_1_Max = TUint_1_Max;
  [[gnu::unused]] TUint_2 Uint_2_Max = TUint_2_Max;
  [[gnu::unused]] TUint_4 Uint_4_Max = TUint_4_Max;

  [[gnu::unused]] TSint_1 Sint_1_Max = TSint_1_Max;
  [[gnu::unused]] TSint_1 Sint_1_Min = TSint_1_Min;

  [[gnu::unused]] TSint_2 Sint_2_Max = TSint_2_Max;
  [[gnu::unused]] TSint_2 Sint_2_Min = TSint_2_Min;

  [[gnu::unused]] TSint_4 Sint_4_Max = TSint_4_Max;
  [[gnu::unused]] TSint_4 Sint_4_Min = TSint_4_Min;

  [[gnu::unused]] TUnit Unit;
  [[gnu::unused]] TAddress Address;

  [[gnu::unused]] TAddressSegment AddressSegment =
    { .Addr = 0, .Size = 0 };
}

void setup()
{
  CompilationTest();
}

void loop()
{
}

/*
  2024-05-17
  2025-08-24
*/
