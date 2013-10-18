#include "include/conversion.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "HardwareSerial.h"

//#include "cstdio.h"

//#include "iostream"

conversion::conversion()
{
    //ctor
}

conversion::~conversion()
{
    //dtor
}

void conversion::intToStr (int value, char* &str)
{
    str=(char*) realloc (str, sizeof(int)*8+1);
    //sprintf (str, "%d", value); //for c++
    itoa(value, str,10); //c style way
}

char* conversion::charCat (char* one, char* two)
{
    /*
       来源：http://stackoverflow.com/questions/2218290/concatenate-char-array-in-c

       可能需要引用的库文件：
           #include "stdio.h"
           #include "stdlib.h"
           #include "string.h"
           #include "iostream"

    */
    int len = strlen (one) + strlen (two) + 1;
    char* newStr = (char*) malloc (len);
    strncpy (newStr, one, len);
    strncat (newStr, two, len - strlen (newStr) );
    return newStr;
}


uint8_t conversion::floatToStr (float value, uint8_t digits, char* &str)
{
    //返回字符串长度
    str = (char*) malloc (11 + digits); //float has at most 10 digits in integer part and one for the point
    dtostrf (value, 1, digits, str);
    return strlen (str);
}

uint8_t conversion::appendChar(char* &dest, const char* str)
{
    /*
        char *str;

        // Initial memory allocation
        str = (char *) malloc (15);
        strcpy (str, "tutorialspoint");
        printf ("String = %s,  Address = %u\n", str, str);

        Serial.println (str);
        // Reallocating memory
        str = (char *) realloc (str, 25);
        strcat (str, ".com");
        printf ("String = %s,  Address = %u\n", str, str);

        Serial.println (str);
        free (str);
    */


    dest  = (char *) realloc (dest , strlen (dest)+strlen (str)+1);
    strcat (dest, str);

    return strlen(dest);
}

conversion converter;
