#ifndef __ANIMATIONSQUARE_H
#define __ANIMATIONSQUARE_H

#include "Animation.h"




class CAnimationSquare: public CAnimation
{
    public:
        // Construction, destruction and initialisation
        CAnimationSquare(const uint8_t nDataPin, const uint8_t nNumIterations, const uint32_t nDelayMillis);
        virtual ~CAnimationSquare();


    protected:
        // Helpers
        virtual void doAnimation();
        void doXYSquare(const int8_t nX1, const int8_t nY1, const int8_t nX2, const int8_t nY2, uint32_t& nColor);
        void doYZSquare(const int8_t nY1, const int8_t nZ1, const int8_t nY2, const int8_t nZ2, uint32_t& nColor);
        void doXZSquare(const int8_t nX1, const int8_t nZ1, const int8_t nX2, const int8_t nZ2, uint32_t& nColor);
        void doXYtoXZTransition(const int8_t nX1, int8_t& nY1, int8_t& nZ1, const int8_t nX2, int8_t& nY2, int8_t& nZ2, uint32_t& nColor);
        void doXZtoYZTransition(int8_t& nX1, int8_t& nY1, const int8_t nZ1, int8_t& nX2, int8_t& nY2, const int8_t nZ2, uint32_t& nColor);
        void doYZtoXYTransition(int8_t& nX1, const int8_t nY1, int8_t& nZ1, int8_t& nX2, const int8_t nY2, int8_t& nZ2, uint32_t& nColor);
};

#endif
