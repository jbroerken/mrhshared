/**
 *  mrhshared
 *  Copyright (C) 2021 - 2022 Jens Brörken
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty.  In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 *
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 *
 *  1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 *
 *  2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 *
 *  3. This notice may not be removed or altered from any source distribution.
 */

#ifndef MRH_Typedefs_h
#define MRH_Typedefs_h

// C
#include <stddef.h>
#include <stdint.h>

// External

// Project


//*************************************************************************************
// Primitive Unsigned
//*************************************************************************************

typedef uint64_t MRH_Uint64;
typedef uint32_t MRH_Uint32;
typedef uint16_t MRH_Uint16;
typedef uint8_t MRH_Uint8;

//*************************************************************************************
// Primitive Signed
//*************************************************************************************

typedef int64_t MRH_Sint64;
typedef int32_t MRH_Sint32;
typedef int16_t MRH_Sint16;
typedef int8_t MRH_Sint8;
typedef double MRH_Sfloat64;
typedef float MRH_Sfloat32;

#endif /* MRH_Typedefs_h */
