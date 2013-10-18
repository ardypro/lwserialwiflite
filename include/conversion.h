#ifndef CONVERSION_H
#define CONVERSION_H

#include "Arduino.h"

class conversion
{
public:
    conversion();
    virtual ~conversion();

    void intToStr(int value, char* &str);
    char* charCat(char* one, char* two);
    uint8_t floatToStr(float value, uint8_t digits, char* &str);
    uint8_t appendChar(char* &dest, const char* str);
protected:
private:
};

extern conversion converter;
#endif // CONVERSION_H
