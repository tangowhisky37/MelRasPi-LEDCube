#include "Color.h"




CRainbow::CRainbow()
{
    m_nI = 0;

    m_arrayColors[0] = RGB(255, 0, 0);
    m_arrayColors[1] = RGB(250, 5, 0);
    m_arrayColors[2] = RGB(245, 10, 0);
    m_arrayColors[3] = RGB(240, 15, 0);
    m_arrayColors[4] = RGB(235, 20, 0);
    m_arrayColors[5] = RGB(230, 25, 0);
    m_arrayColors[6] = RGB(225, 30, 0);
    m_arrayColors[7] = RGB(220, 35, 0);
    m_arrayColors[8] = RGB(215, 40, 0);
    m_arrayColors[9] = RGB(210, 45, 0);
    m_arrayColors[10] = RGB(205, 50, 0);
    m_arrayColors[11] = RGB(200, 55, 0);
    m_arrayColors[12] = RGB(195, 60, 0);
    m_arrayColors[13] = RGB(190, 65, 0);
    m_arrayColors[14] = RGB(185, 70, 0);
    m_arrayColors[15] = RGB(180, 75, 0);
    m_arrayColors[16] = RGB(175, 80, 0);
    m_arrayColors[17] = RGB(170, 85, 0);
    m_arrayColors[18] = RGB(165, 90, 0);
    m_arrayColors[19] = RGB(160, 95, 0);
    m_arrayColors[20] = RGB(155, 100, 0);
    m_arrayColors[21] = RGB(150, 105, 0);
    m_arrayColors[22] = RGB(145, 110, 0);
    m_arrayColors[23] = RGB(140, 115, 0);
    m_arrayColors[24] = RGB(135, 120, 0);
    m_arrayColors[25] = RGB(130, 125, 0);
    m_arrayColors[26] = RGB(125, 130, 0);
    m_arrayColors[27] = RGB(120, 135, 0);
    m_arrayColors[28] = RGB(115, 140, 0);
    m_arrayColors[29] = RGB(110, 145, 0);
    m_arrayColors[30] = RGB(105, 150, 0);
    m_arrayColors[31] = RGB(100, 155, 0);
    m_arrayColors[32] = RGB(95, 160, 0);
    m_arrayColors[33] = RGB(90, 165, 0);
    m_arrayColors[34] = RGB(85, 170, 0);
    m_arrayColors[35] = RGB(80, 175, 0);
    m_arrayColors[36] = RGB(75, 180, 0);
    m_arrayColors[37] = RGB(70, 185, 0);
    m_arrayColors[38] = RGB(65, 190, 0);
    m_arrayColors[39] = RGB(60, 195, 0);
    m_arrayColors[40] = RGB(55, 200, 0);
    m_arrayColors[41] = RGB(50, 205, 0);
    m_arrayColors[42] = RGB(45, 210, 0);
    m_arrayColors[43] = RGB(40, 215, 0);
    m_arrayColors[44] = RGB(35, 220, 0);
    m_arrayColors[45] = RGB(30, 225, 0);
    m_arrayColors[46] = RGB(25, 230, 0);
    m_arrayColors[47] = RGB(20, 235, 0);
    m_arrayColors[48] = RGB(15, 240, 0);
    m_arrayColors[49] = RGB(10, 245, 0);
    m_arrayColors[50] = RGB(5, 250, 0);
    m_arrayColors[51] = RGB(0, 255, 0);
    m_arrayColors[52] = RGB(0, 250, 5);
    m_arrayColors[53] = RGB(0, 245, 10);
    m_arrayColors[54] = RGB(0, 240, 15);
    m_arrayColors[55] = RGB(0, 235, 20);
    m_arrayColors[56] = RGB(0, 230, 25);
    m_arrayColors[57] = RGB(0, 225, 30);
    m_arrayColors[58] = RGB(0, 220, 35);
    m_arrayColors[59] = RGB(0, 215, 40);
    m_arrayColors[60] = RGB(0, 210, 45);
    m_arrayColors[61] = RGB(0, 205, 50);
    m_arrayColors[62] = RGB(0, 200, 55);
    m_arrayColors[63] = RGB(0, 195, 60);
    m_arrayColors[64] = RGB(0, 190, 65);
    m_arrayColors[65] = RGB(0, 185, 70);
    m_arrayColors[66] = RGB(0, 180, 75);
    m_arrayColors[67] = RGB(0, 175, 80);
    m_arrayColors[68] = RGB(0, 170, 85);
    m_arrayColors[69] = RGB(0, 165, 90);
    m_arrayColors[60] = RGB(0, 160, 95);
    m_arrayColors[71] = RGB(0, 155, 100);
    m_arrayColors[72] = RGB(0, 150, 105);
    m_arrayColors[73] = RGB(0, 145, 110);
    m_arrayColors[74] = RGB(0, 140, 115);
    m_arrayColors[75] = RGB(0, 135, 120);
    m_arrayColors[76] = RGB(0, 130, 125);
    m_arrayColors[77] = RGB(0, 125, 130);
    m_arrayColors[78] = RGB(0, 120, 135);
    m_arrayColors[79] = RGB(0, 115, 140);
    m_arrayColors[80] = RGB(0, 110, 145);
    m_arrayColors[81] = RGB(0, 105, 150);
    m_arrayColors[82] = RGB(0, 100, 155);
    m_arrayColors[83] = RGB(0, 95, 160);
    m_arrayColors[84] = RGB(0, 90, 165);
    m_arrayColors[85] = RGB(0, 85, 170);
    m_arrayColors[86] = RGB(0, 80, 175);
    m_arrayColors[87] = RGB(0, 75, 180);
    m_arrayColors[88] = RGB(0, 70, 185);
    m_arrayColors[89] = RGB(0, 65, 190);
    m_arrayColors[90] = RGB(0, 60, 195);
    m_arrayColors[91] = RGB(0, 55, 200);
    m_arrayColors[92] = RGB(0, 50, 205);
    m_arrayColors[93] = RGB(0, 45, 210);
    m_arrayColors[94] = RGB(0, 40, 215);
    m_arrayColors[95] = RGB(0, 35, 220);
    m_arrayColors[96] = RGB(0, 30, 225);
    m_arrayColors[97] = RGB(0, 25, 230);
    m_arrayColors[98] = RGB(0, 20, 235);
    m_arrayColors[99] = RGB(0, 15, 240);
    m_arrayColors[100] = RGB(0, 10, 245);
    m_arrayColors[101] = RGB(0, 5, 250);
    m_arrayColors[102] = RGB(0, 0, 255);
    m_arrayColors[103] = RGB(5, 0, 250);
    m_arrayColors[104] = RGB(10, 0, 245);
    m_arrayColors[105] = RGB(15, 0, 240);
    m_arrayColors[106] = RGB(20, 0, 235);
    m_arrayColors[107] = RGB(25, 0, 230);
    m_arrayColors[108] = RGB(30, 0, 225);
    m_arrayColors[109] = RGB(35, 0, 220);
    m_arrayColors[110] = RGB(40, 0, 215);
    m_arrayColors[111] = RGB(45, 0, 210);
    m_arrayColors[112] = RGB(50, 0, 205);
    m_arrayColors[113] = RGB(55, 0, 200);
    m_arrayColors[114] = RGB(60, 0, 195);
    m_arrayColors[115] = RGB(65, 0, 190);
    m_arrayColors[116] = RGB(70, 0, 185);
    m_arrayColors[117] = RGB(75, 0, 180);
    m_arrayColors[118] = RGB(80, 0, 175);
    m_arrayColors[119] = RGB(85, 0, 170);
    m_arrayColors[120] = RGB(90, 0, 165);
    m_arrayColors[121] = RGB(95, 0, 160);
    m_arrayColors[122] = RGB(100, 0, 155);
    m_arrayColors[123] = RGB(105, 0, 150);
    m_arrayColors[124] = RGB(110, 0, 145);
    m_arrayColors[125] = RGB(115, 0, 140);
    m_arrayColors[126] = RGB(120, 0, 135);
    m_arrayColors[127] = RGB(125, 0, 130);
    m_arrayColors[128] = RGB(130, 0, 125);
    m_arrayColors[129] = RGB(135, 0, 120);
    m_arrayColors[130] = RGB(140, 0, 115);
    m_arrayColors[131] = RGB(145, 0, 110);
    m_arrayColors[132] = RGB(150, 0, 105);
    m_arrayColors[133] = RGB(155, 0, 100);
    m_arrayColors[134] = RGB(160, 0, 95);
    m_arrayColors[135] = RGB(165, 0, 90);
    m_arrayColors[136] = RGB(170, 0, 85);
    m_arrayColors[137] = RGB(175, 0, 80);
    m_arrayColors[138] = RGB(180, 0, 75);
    m_arrayColors[140] = RGB(185, 0, 70);
    m_arrayColors[141] = RGB(190, 0, 65);
    m_arrayColors[142] = RGB(195, 0, 60);
    m_arrayColors[143] = RGB(200, 0, 55);
    m_arrayColors[144] = RGB(205, 0, 50);
    m_arrayColors[145] = RGB(210, 0, 45);
    m_arrayColors[146] = RGB(215, 0, 40);
    m_arrayColors[147] = RGB(220, 0, 35);
    m_arrayColors[148] = RGB(225, 0, 30);
    m_arrayColors[149] = RGB(230, 0, 25);
    m_arrayColors[150] = RGB(235, 0, 20);
    m_arrayColors[151] = RGB(240, 0, 15);
    m_arrayColors[152] = RGB(245, 0, 10);
    m_arrayColors[153] = RGB(250, 0, 5);
}

CRainbow::~CRainbow()
{
  
}

uint32_t CRainbow::nextColor()
{
    if (m_nI == MAX_COLORS)
        m_nI = 0;
    else
        m_nI++;
        
    return m_arrayColors[m_nI];
}

CRainbow rainbow;


