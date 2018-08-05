#include "AnimationSquare.h"




CAnimationSquare::CAnimationSquare(const uint8_t nDataPin, const uint8_t nNumIterations, const uint32_t nDelayMillis): CAnimation(nDataPin, nNumIterations, nDelayMillis)
{
  
}

CAnimationSquare::~CAnimationSquare()
{
  
}

void CAnimationSquare::doAnimation()
{
    int8_t nX1 = 1, nY1 = 1, nZ1 = 1, nX2 = NUM_LEDS, nY2 = NUM_LEDS, nZ2 = 1;
    uint32_t nColor = RED;
  
    doXYSquare(nX1, nY1, nX2, nY2, nColor);
    doXYtoXZTransition(nX1, nY1, nZ1, nX2, nY2, nZ2, nColor);
    doXZSquare(nX1, nZ1, nX2, nZ2, nColor);
    doXZtoYZTransition(nX1, nY1, nZ1, nX2, nY2, nZ2, nColor); 
    for (; nX2 > 1; nX2--, nY2++)
    {
        m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
        m_LEDCube.display();
        delay(m_nDelayMillis);
        nColor = rainbow.nextColor();
    }
    doYZSquare(nY1, nZ1, nY2, nZ2, nColor);
    doYZtoXYTransition(nX1, nY1, nZ1, nX2, nY2, nZ2, nColor);
}

void CAnimationSquare::doXYtoXZTransition(const int8_t nX1, int8_t& nY1, int8_t& nZ1, const int8_t nX2, int8_t& nY2, int8_t& nZ2, uint32_t& nColor)
{
    if (nZ1 == 1)
    {
        for (; nY2 > 1; nY2--, nZ2++)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
    else if (nZ1 == NUM_LEDS)
    {
        for (; nY1 > 1; nY1--, nZ1--)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
}

void CAnimationSquare::doXZtoYZTransition(int8_t& nX1, int8_t& nY1, const int8_t nZ1, int8_t& nX2, int8_t& nY2, const int8_t nZ2, uint32_t& nColor)
{
    if (nY1 == 1)
    {
        for (; nX2 > 1; nX2--, nY2++)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
    else if (nY1 == NUM_LEDS)
    {
        for (; nX1 > 1; nX1--, nY1--)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
}

void CAnimationSquare::doYZtoXYTransition(int8_t& nX1, const int8_t nY1, int8_t& nZ1, int8_t& nX2, const int8_t nY2, int8_t& nZ2, uint32_t& nColor)
{
    if (nX1 == 1)
    {
        for (; nX2 < NUM_LEDS; nX2++, nZ2--)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
    else if (nX1 == NUM_LEDS)
    {
        for (; nX1 > 1; nX1--, nZ2--)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ1, nX2, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }
}

void CAnimationSquare::doXYSquare(const int8_t nX1, const int8_t nY1, const int8_t nX2, const int8_t nY2, uint32_t& nColor)
{
    for (uint8_t nCount = 0; nCount < m_nNumIterations; nCount++)
    {
        for (int8_t nZ = 1; nZ <= NUM_LEDS; nZ++)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }    
        for (int8_t nZ = NUM_LEDS; nZ > 0; nZ--)
        {
            m_LEDCube.rect(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }
    }   
}

void CAnimationSquare::doYZSquare(const int8_t nY1, const int8_t nZ1, const int8_t nY2, const int8_t nZ2, uint32_t& nColor)
{
    for (uint8_t nCount = 0; nCount < m_nNumIterations; nCount++)
    {
        for (int8_t nX = 1; nX <= NUM_LEDS; nX++)
        {
            m_LEDCube.rect(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }    
        for (int8_t nX = NUM_LEDS; nX > 0; nX--)
        {
            m_LEDCube.rect(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }    
    }
}

void CAnimationSquare::doXZSquare(const int8_t nX1, const int8_t nZ1, const int8_t nX2, const int8_t nZ2, uint32_t& nColor)
{
    for (uint8_t nCount = 0; nCount < m_nNumIterations; nCount++)
    {
        for (int8_t nY = 1; nY <= NUM_LEDS; nY++)
        {
            m_LEDCube.rect(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }    
        for (int8_t nY = NUM_LEDS; nY > 0; nY--)
        {
            m_LEDCube.rect(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
            m_LEDCube.display();
            delay(m_nDelayMillis);
            nColor = rainbow.nextColor();
        }    
    }
}

