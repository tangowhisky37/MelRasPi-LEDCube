#ifndef __COLOR_H_
#define __COLOR_H_

#include "Arduino.h"




#define RGB(nRed, nGreen, nBlue) (uint32_t)(((uint32_t)nGreen << 16) | ((uint32_t)nRed <<  8) | (uint32_t)nBlue)

#define GET_GREEN(nColor) (nColor & 0x00FF0000) >> 16

#define GET_RED(nColor) (nColor & 0x0000FF00) >> 8

#define GET_BLUE(nColor) nColor & 0x000000FF

#define RED (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)255 <<  8) | (uint32_t)0)

#define YELLOW (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)255 <<  8) | (uint32_t)0)

#define GREEN (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)0 <<  8) | (uint32_t)0)

#define CYAN (uint32_t)(((uint32_t)255 << 16) | ((uint32_t)0 <<  8) | (uint32_t)255)

#define BLUE (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)0 <<  8) | (uint32_t)255)

#define MAGENTA (uint32_t)(((uint32_t)0 << 16) | ((uint32_t)255 <<  8) | (uint32_t)255)

#define BLACK (uint32_t)0

#define MAX_COLORS 255

class CRainbow
{
    public:
        // Construction, destruction and initialisation
        CRainbow();
        virtual ~CRainbow();

        // Interface
        uint32_t nextColor();

    protected:
        // Data
        uint32_t  m_arrayColors[MAX_COLORS];
        uint16_t m_nI;
};

extern CRainbow rainbow;

#endif
