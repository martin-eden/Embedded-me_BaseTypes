// My nomenclature of type names

/*
  Version: 10
  Author: Martin Eden
  Last mod.: 2025-01-28
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
typedef unsigned char TUnit;

/*
  Address of unit

  Like coordinates of container on ship.

  We can modify address but it must remain address.
  So please don't XOR it with key.

  This code is for ATmega328, so size is 2 Ki, so TUint_2.
  But size of memory is another parameter.
  Memory space can be arbitrary large.
*/
typedef TUint_2 TAddress;

/*
  Logical flag

  Can never be directly stored but used in processing logic.
*/
typedef bool TBool;

/*
  Method call

  Three-address structure

  With dynamic functions generation we can reduce any call to
  one address.

  It's possible to reduce any call to two addresses but requires
  packing data in instance.

  Three addresses are quite convenient to call void methods.
*/
typedef void (*TMethod)(TAddress Data, TAddress Instance);

/*
  Failable operation

  Aka boolean method call.

  More convenience for some processing tasks.
*/
typedef TBool (*TOperation)(TAddress Data, TAddress Instance);

/*
  2024-02
  2024-03
  2024-05
  2024-06
  2024-09
  2024-10
  2024-12-12 [+] TUnitGetter, [-] TChar, [+] TAsciiz
  2024-12-13 [-] TUnitGetter, [+] TResponsiveMethod
  2024-12-18
  2025-01-28
*/
