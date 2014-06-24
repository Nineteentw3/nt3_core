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
#ifndef _NT3_LIMITS_H_
#define _NT3_LIMITS_H_

/*
// Limits
*/
#include <limits>

namespace nt3
{

#define S8_MIN SCHAR_MIN
#define S8_MAX SCHAR_MAX

#define S16_MIN SHRT_MIN
#define S16_MAX SHRT_MAX

#define S32_MIN INT_MIN
#define S32_MAX INT_MAX

#define S64_MIN LLONG_MIN
#define S64_MAX LLONG_MAX

#define U8_MIN USCHAR_MIN
#define U8_MAX USCHAR_MAX

#define U16_MIN USHRT_MIN
#define U16_MAX USHRT_MAX

#define U32_MIN UINT_MIN
#define U32_MAX UINT_MAX

#define U64_MIN ULLONG_MIN
#define U64_MAX ULLONG_MAX

#define F32_MIN FLT_MIN
#define F32_MAX FLT_MAX

#define F64_MIN DBL_MIN
#define F64_MAX DBL_MAX

} // nt3

#endif // _NT3_LIMITS_H_
