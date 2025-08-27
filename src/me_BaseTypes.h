// My nomenclature of type names

/*
  Version: 12
  Author: Martin Eden
  Last mod.: 2025-08-25
*/

#pragma once

// Renaming fancy C types to our not less fancy names:
// (

// [0, 256)
typedef unsigned char TUint_1;
// [0, 256^2) aka 64 Ki
typedef unsigned int TUint_2;
// [0, 256^2^2) aka 4 Gi
typedef unsigned long int TUint_4;

// Signed integers are not really used. But let em stay for a while.
// Centered [0, 256)
typedef signed char TSint_1;
// Centered [0, 256^2)
typedef signed int TSint_2;
// Centered [0, 256^2^2)
typedef signed long int TSint_4;

// Not sure we need float but let it stay for now
typedef float TFloat;

/*
  Pointer to byte

  That pointer to byte assumes list of bytes that ends on zero.
  Called ASCIIZ.

  We don't like this structure. Using mostly to receive hardcoded
  arguments.

  There is " key on keyboard, so C thinks it can handle "strings".
  Great language!
*/
typedef const char * TAsciiz;

// )

// ( Constants for integer types
const TUint_1 TUint_1_Max = 0xFF;
const TUint_2 TUint_2_Max = 0xFFFF;
const TUint_4 TUint_4_Max = 0xFFFFFFFF;

const TSint_1
  TSint_1_Max = 0x7F,
  TSint_1_Min = 0x80;
const TSint_2
  TSint_2_Max = 0x7FFF,
  TSint_2_Min = 0x8000;
const TSint_4
  TSint_4_Max = 0x7FFFFFFF,
  TSint_4_Min = 0x80000000;
// )

/*
  Unit of stuff that our system handles.

  It's it's something that has known size.

  Code should never pretend it knows value of unit.

  It's like container on ship. We know weight but not contents.

  Only processor has instructions to examine and modify
  unit's contents.

  For AVR architecture it's byte. (What a spoiler!)
*/
typedef TUint_1 TUnit;

/*
  Address of unit

  It's like coordinates of container on ship.

  ATmega328 has 2 KiB memory, so TUint_2 is enough for address.
*/
typedef TUint_2 TAddress;

/*
  Logical flag

  Can never be directly stored but used in processing logic.
*/
typedef bool TBool;

/*
  2024 # # # # # # # # #
  2025-01-28
  2025-08-25
  2025-08-27
*/
