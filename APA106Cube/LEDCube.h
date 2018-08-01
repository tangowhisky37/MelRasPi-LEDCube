#ifndef __LED_CUBE_H_
#define __LED_CUBE_H_

#include <Adafruit_NeoPixel.h>
#include "Color.h"



#define NUM_LEDS 4

class CLEDCube
{
    public:
        // Construction, destruction and initialisation
        CLEDCube(const uint8_t nDataPin);
        virtual ~CLEDCube();

        // Interface
        void point(const uint32_t nColor, const uint8_t nX, const uint8_t nY, const uint8_t nZ);
        void line(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2);
        void rect(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2);
        void cuboid(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2);
        void display();
        void clear();
        void begin();
        
    protected:
        // Data
        Adafruit_NeoPixel m_pixels;

        char m_arrayLEDs[NUM_LEDS][NUM_LEDS][NUM_LEDS];
};

#endif
