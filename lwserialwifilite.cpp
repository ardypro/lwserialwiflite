#include "lwserialwifilite.h"
#include "HardwareSerial.h"
#include "strutils.h"
#include "stdio.h"

#define leadingCMD "{\"method\": \"upload\","
#define endingCMD "\"}]}&^!"



void lwSerialWifiLite::append (const char* sensor, bool value)
{


};

void lwSerialWifiLite::append (const char* sensor, int value)
{

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
//do nothing. Implement uploadValue, instead.

//snprintf(str, sizeof(str), "%d", num);


//char str[12];
//int num = 3;
//sprintf(str, "%d", num); // str now contains "3"

    float x = 345.6134;
    char buf[10];
    sprintf(buf, "Test=%.2f", x);
    Serial.println(buf);
};

void lwSerialWifiLite::update()
{
    // TODO (Ardypro#1#): 后面改为跟interval有关
    if (true)
    {
        char* cmd;
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
