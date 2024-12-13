// My nomenclature of type names

/*
  Version: 7
  Author: Martin Eden
  Last mod.: 2024-12-13
*/

#pragma once

// Time to break things!

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

// What we really need

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
  Boolean method call

  Three addresses plus boolean flag.

  More convenience for some processing tasks.
*/
typedef TBool (*TResponsiveMethod)(TAddress Data, TAddress Instance);

/*
  2024-02-01
  2024-03-12
  2024-05-17 [+] Namespace, [-] TBytes
  2024-06-27 [+] TMethod
  2024-09-12 [-] Namespace
  2024-10-28 [-] TUint_8, TSint_8. No need
  2024-12-12 [+] TUnitGetter, [-] TChar, [+] TAsciiz
  2024-12-13 [-] TUnitGetter, [+] TResponsiveMethod
*/
