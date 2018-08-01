#include <Adafruit_NeoPixel.h>
#include "LEDCube.h"




CLEDCube LEDCube(11);

void setup() 
{
    Serial.begin(115200);
    while (!Serial);

    LEDCube.display();
    Serial.println(F("=========================="));
}

void loop() 
{
    if (Serial.available())
    {
        char cCh = 0;
        uint8_t nX1 = 0, nY1 = 0, nZ1 = 0, nX2 = 0, nY2 = 0, nZ2 = 0;

        cCh = Serial.read();
        nX1 = Serial.parseInt();
        nY1 = Serial.parseInt();
        nZ1 = Serial.parseInt();

        if (((cCh == 'l') || (cCh == 'r') || (cCh == 'c')) && Serial.available())
        {
          nX2 = Serial.parseInt();
          nY2 = Serial.parseInt();
          nZ2 = Serial.parseInt();
        }
        LEDCube.clear();

        if (cCh == 'p')
           LEDCube.point(BLUE, nX1, nY1, nZ1); 
        else if (cCh == 'l')
           LEDCube.line(BLUE, nX1, nY1, nZ1, nX2, nY2, nZ2); 
        else if (cCh == 'r')
           LEDCube.rect(BLUE, nX1, nY1, nZ1, nX2, nY2, nZ2); 
        else if (cCh == 'c')
           LEDCube.cuboid(BLUE, nX1, nY1, nZ1, nX2, nY2, nZ2); 

        if ((cCh == 'p') || (cCh == 'l') || (cCh == 'r') || (cCh == 'c'))
        {
            LEDCube.display();
            Serial.println(F("=========================="));
        }
    }
}
