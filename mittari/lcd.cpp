#include "lcd.h"
#include <iostream>
LCD::LCD() {}

std::string LCD::floatToString(float number)
{
    return std::to_string(number);
}

void LCD::printToLcd(std::string string)
{
    std::cout << "LCD -> : " << string;
}
