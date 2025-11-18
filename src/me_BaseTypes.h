// My nomenclature of type names

/*
  Version: 16
  Author: Martin Eden
  Last mod.: 2025-11-18
*/

#pragma once

// ( Renaming fancy C types to our not less fancy names:

/*
  Logical flag

  Can never be directly stored but used in processing logic.
*/
typedef bool TBool;

// Integer [0, 2^8)
typedef unsigned char TUint_1;
// Integer [0, 2^16)
typedef unsigned int TUint_2;
// Integer [0, 2^32)
typedef unsigned long int TUint_4;

// Integer [-2^7, 2^7)
typedef signed char TSint_1;
// Integer [-2^15, 2^15)
typedef signed int TSint_2;
// Integer [-2^31, 2^31)
typedef signed long int TSint_4;

// Not sure we need float but let it stay for now
typedef float TFloat;

/*
  Pointer to byte

  This is what you'll get as argument when calling print("Hello!\n").

  C library functions assume this is memory address and iterate it
  until byte in memory is zero.

  This type is used mostly in input interface functions.
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
  Unit of stuff that system handles

  It's like standard container on cargo ship.

  For AVR architecture it's byte. (What a spoiler!)
*/
typedef TUint_1 TUnit;

/*
  Address of unit

  It's like coordinates of container on ship.

  ATmega328 uses two bytes for address.
*/
typedef TUint_2 TAddress;

// Max value address can store
const TAddress TAddress_Max = TUint_2_Max;

/*
  Storage for number of units

  It must have same capacity as TAddress.
*/
typedef TUint_2 TSize;

// Max "size" value
const TSize TSize_Max = TUint_2_Max;

/*
  Address span
*/
struct TAddressSegment
{
  TAddress Addr = 0;
  TSize Size = 0;
};

/*
  Macro to create address span from name:

    TAddressSegment DataSeg = AsAddrSeg_M(Data);

  is equivalent to

    TAddressSegment DataSeg = { (TAddress) &Data, sizeof(Data) };
*/
#define AsAddrSeg_M(Name) \
  __extension__ \
  ( \
    { \
      TAddressSegment \
      { \
        .Addr = (TAddress) &Name, \
        .Size = sizeof(Name), \
      }; \
    } \
  )

// Maximum span
const TAddressSegment TAddressSegment_Max =
  { .Addr = 0, .Size = TSize_Max };

/*
  2024 # # # # # # # # #
  2025-01-28
  2025-08-25
  2025-08-27
  2025-08-28
  2025-08-29
  2025-11-18
*/
