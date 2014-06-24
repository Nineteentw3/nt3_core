/*
* Copyright (C) 2014  Shawn Williams
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _NT3_TYPES_H_
#define _NT3_TYPES_H_

namespace nt3
{

/*
// Types
*/
#ifdef WIN32
  typedef   signed  __int8    s8;
  typedef   signed  __int16   s16;
  typedef   signed  __int32   s32;
  typedef   signed  __int64   s64;

  typedef unsigned  __int8    u8;
  typedef unsigned  __int16   u16;
  typedef unsigned  __int32   u32;
  typedef unsigned  __int64   u64;
#else
  typedef signed    char      s8;
  typedef signed    short     s16;
  typedef signed    int       s32;
  typedef signed    long long s64;

  typedef unsigned  char      u8;
  typedef unsigned  short     u16;
  typedef unsigned  int       u32;
  typedef unsigned  long long u64;
#endif // WIN32

typedef float   f32;
typedef double  f64;

typedef u8      byte;
typedef s32     rbool;
typedef u16     rwchar;

#define DllImport __declspec(dllimport)
#define DllExport __declspec(dllexport)

} // nt3

#endif // _NT3_TYPES_H_
