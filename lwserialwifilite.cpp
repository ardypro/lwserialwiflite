#include "lwserialwifilite.h"
#include "HardwareSerial.h"

#define leadingCMD "{\"method\": \"upload\","
#define endingCMD "\"}]}&^!"


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




void lwSerialWifiLite::append (const char* sensor, bool value)
{


};

void lwSerialWifiLite::append (const char* sensor, int value)
{
    int len;

};

void lwSerialWifiLite::append (const char* sensor, unsigned int value)
{

};

void lwSerialWifiLite::append (const char* sensor, long value)
{

};

void lwSerialWifiLite::append (const char* sensor, unsigned long value)
{

};

void lwSerialWifiLite::append (const char* sensor, double value)
{

};

void lwSerialWifiLite::append (const char* sensor, char* value)
{

};


void lwSerialWifiLite::upload()
{


};

unsigned int lwSerialWifiLite::getLastErr()
{


}

void lwSerialWifiLite::update()
{
    // TODO (Ardypro#1#): 后面改为跟interval有关
    if (true)
    {
        char* cmd="OLD VALUE";
        int len = strlen (userKey) + strlen (gateWay) + 51;
        cmd = (char*) malloc (len);
        snprintf (cmd, len, "{\"method\":\"update\",\"gatewayNo\":\"%s\",\"userkey\":\"%s\"}&^!", gateWay, userKey);
        //Serial.write (leadingCMD+cmd);

        char* newcmd;

    }
}

void lwSerialWifiLite::uploadValue()
{

}
