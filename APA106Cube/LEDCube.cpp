#include "LEDCube.h"




CLEDCube::CLEDCube(const uint8_t nDataPin): m_pixels(NUM_LEDS * NUM_LEDS * NUM_LEDS, nDataPin, NEO_GRB + NEO_KHZ400)
{
    clear();
}

CLEDCube::~CLEDCube()
{
}

void CLEDCube::point(const uint32_t nColor, const uint8_t nX, const uint8_t nY, const uint8_t nZ)
{
    if ((nX >= 1) && (nX <= NUM_LEDS) && (nY >= 1) && (nY <= NUM_LEDS) && (nZ >= 1) && (nZ <= NUM_LEDS))
    {
        //m_pixels.setPixelColor((nX + (nY  * NUM_LEDS) + (nZ * NUM_LEDS * NUM_LEDS)) - 1, nColor);

        if (nColor == BLACK)
            m_arrayLEDs[nX - 1][nY - 1][nZ - 1] = '0';
        else
            m_arrayLEDs[nX - 1][nY - 1][nZ - 1] = '1';
    }
    else
    {
        Serial.print(F("Coordinate "));
        Serial.print(nX);
        Serial.print(F(","));
        Serial.print(nY);
        Serial.print(F(","));
        Serial.print(nZ);
        Serial.print(F(" is out of range for a "));
        Serial.print(NUM_LEDS);
        Serial.print(F("x"));
        Serial.print(NUM_LEDS);
        Serial.print(F("x"));
        Serial.print(NUM_LEDS);
        Serial.print(F(" LED cube!"));
    }
}

void CLEDCube::line(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2)
{
    uint8_t nX = nX1, nY = nY1, nZ = nZ1;
    int8_t nIncX = 0, nIncY = 0, nIncZ = 0;

    if ((nX2 - nX1) == 0)
        nIncX = 0;
    else if ((nX2 - nX1) > 0)
        nIncX = 1;
    else
        nIncX = -1;
    
    if ((nY2 - nY1) == 0)
        nIncY = 0;
    else if ((nY2 - nY1) > 0)
        nIncY = 1;
    else
        nIncY = -1;

    if ((nZ2 - nZ1) == 0)
        nIncZ = 0;
    else if ((nZ2 - nZ1) > 0)
        nIncZ = 1;
    else
        nIncZ = -1;

    while (true)
    {
        point(nColor, nX, nY, nZ);

        if (nX != nX2)
            nX += nIncX;
        if (nY != nY2)
            nY += nIncY;
        if (nZ != nZ2)
            nZ += nIncZ;

        if ((nX == nX2) && (nY == nY2) && (nZ == nZ2))
        {
            point(nColor, nX, nY, nZ);
            break;
        }
    }
}

void CLEDCube::rect(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2)
{
    if ((nX2 - nX1) > 0)
    {
        for (uint8_t nX = nX1; nX <= nX2; nX++)
            line(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
    }
    else if ((nX2 - nX1) < 0)
    {
        for (uint8_t nX = nX1; nX <= nX2; nX--)
            line(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
    }
    else if ((nY2 - nY1) > 0)
    {
        for (uint8_t nY = nY1; nY <= nY2; nY++)
            line(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
    }
    else if ((nY2 - nY1) < 0)
    {
        for (uint8_t nY = nY1; nY <= nY2; nY--)
            line(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
    }
    else if ((nZ2 - nZ1) > 0)
    {
        for (uint8_t nZ = nZ1; nZ <= nZ2; nZ++)
            line(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
    }
    else if ((nZ2 - nZ1) < 0)
    {
        for (uint8_t nZ = nZ1; nZ <= nZ2; nZ--)
            line(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
    }
}

void CLEDCube::cuboid(const uint32_t nColor, const uint8_t nX1, const uint8_t nY1, const uint8_t nZ1, const uint8_t nX2, const uint8_t nY2, const uint8_t nZ2)
{
    if ((nX2 - nX1) > 0)
    {
        for (uint8_t nX = nX1; nX <= nX2; nX++)
            rect(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
    }
    else if ((nX2 - nX1) < 0)
    {
        for (uint8_t nX = nX1; nX <= nX2; nX--)
            rect(nColor, nX, nY1, nZ1, nX, nY2, nZ2);
    }
    else if ((nY2 - nY1) > 0)
    {
        for (uint8_t nY = nY1; nY <= nY2; nY++)
            rect(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
    }
    else if ((nY2 - nY1) < 0)
    {
        for (uint8_t nY = nY1; nY <= nY2; nY--)
            rect(nColor, nX1, nY, nZ1, nX2, nY, nZ2);
    }
    else if ((nZ2 - nZ1) > 0)
    {
        for (uint8_t nZ = nZ1; nZ <= nZ2; nZ++)
            rect(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
    }
    else if ((nZ2 - nZ1) < 0)
    {
        for (uint8_t nZ = nZ1; nZ <= nZ2; nZ--)
            rect(nColor, nX1, nY1, nZ, nX2, nY2, nZ);
    }
}

void CLEDCube::begin()
{
    m_pixels.begin();
}

void CLEDCube::display()       
{
    m_pixels.show();

    for (int8_t nZ = NUM_LEDS - 1; nZ >= 0 ; nZ--)
    {
        Serial.print(F("LAYER "));
        Serial.println(nZ + 1);
        for (int8_t nY = NUM_LEDS - 1; nY >= 0; nY--)
        {
            for (uint8_t nX = 0; nX < NUM_LEDS; nX++)
            {
                Serial.print(m_arrayLEDs[nX][nY][nZ]);
                Serial.print(' ');
            }
            Serial.println();
        }
        Serial.println();
        Serial.println();
    }
}

void CLEDCube::clear()
{
    for (uint8_t nI = 0; nI < (NUM_LEDS * NUM_LEDS * NUM_LEDS); nI++)
        m_pixels.setPixelColor(nI, BLACK);
        
    for (uint8_t nX = 0; nX < NUM_LEDS; nX++)
    {
        for (uint8_t nY = 0; nY < NUM_LEDS; nY++)
        {
            for (uint8_t nZ = 0; nZ < NUM_LEDS; nZ++)
                m_arrayLEDs[nX][nY][nZ] = '0';
        }
    }
}

