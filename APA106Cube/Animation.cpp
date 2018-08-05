#include "Animation.h"




CAnimation::CAnimation(const uint8_t nDataPin, const uint8_t nNumIterations, const uint32_t nDelayMillis): m_LEDCube(nDataPin)
{
    m_nNumIterations = nNumIterations;
    m_nDelayMillis = nDelayMillis;
}

CAnimation::~CAnimation()
{
  
}

void CAnimation::run()
{
    for (uint8_t nCount = 0; nCount < m_nNumIterations; nCount++)
        doAnimation();
}


