#ifndef __COLOR_H_
#define __COLOR_H_

#include "Arduino.h"




#define RGB(nRed, nGreen, nBlue) (uint32_t)(((uint32_t)nGreen << 16) | ((uint32_t)nRed <<  8) | (uint32_t)nBlue)

#define RED (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)255 <<  8) | (uint32_t)0)

#define YELLOW (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)255 <<  8) | (uint32_t)0)

#define GREEN (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)0 <<  8) | (uint32_t)0)

#define CYAN (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)0 <<  8) | (uint32_t)255)

#define BLUE (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)0 <<  8) | (uint32_t)255)

#define MAGENTA (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)255 <<  8) | (uint32_t)255)

#define BLACK (uint32_t)0

#endif
