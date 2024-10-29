// My nomenclature of type names

/*
  Version: 6
  Author: Martin Eden
  Last mod.: 2024-10-28
*/

#pragma once

typedef signed char TSint_1;
typedef signed int TSint_2;
typedef signed long int TSint_4;

typedef unsigned char TUint_1;
typedef unsigned int TUint_2;
typedef unsigned long int TUint_4;

typedef char TChar;

typedef bool TBool;

typedef float TFloat;

typedef void (*TMethod)(TUint_2 Data, TUint_2 State);

/*
  2024-02-01
  2024-03-12
  2024-05-17 [+] Namespace, [-] <TBytes>
  2024-06-27 [+] TMethod
  2024-09-12 [-] Namespace
  2024-10-28 [-] TUint_8, TSint_8. No need
*/
