#ifndef LCD_H
#define LCD_H
#include <iostream>
#include <string.h>
class LCD
{
public:
    LCD();
    std::string floatToString(float);
    void printToLcd(std::string);
};

#endif // LCD_H
