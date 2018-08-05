#ifndef __ANIMATION_H
#define __ANIMATION_H

#include "LEDCube.h"




class CAnimation
{
    public:
        // Construction, destruction and initialisation
        CAnimation(const uint8_t nDataPin, const uint8_t nNumIterations, const uint32_t nDelayMillis);
        virtual ~CAnimation();

        // Interface
        void run();

    protected:

        // Data
        CLEDCube m_LEDCube;
        uint32_t m_nDelayMillis;
        uint8_t m_nNumIterations;

        // Helpers
        virtual void doAnimation() = 0;
};

#endif

