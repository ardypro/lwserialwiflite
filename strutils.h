
char* charCat (char* one, char* two)
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
