#include "lwserialwifilite.h"
#include "HardwareSerial.h"

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

};

unsigned int lwSerialWifiLite::getLastErr()
{


}

void lwSerialWifiLite::update()
{
    // TODO (Ardypro#1#): 后面改为跟interval有关
    if (true)
    {
        char* cmd;
        int len = strlen (userKey) + strlen (gateWay) + 51;
        cmd = (char*) malloc (len);
        snprintf (cmd, len, "{\"method\":\"update\",\"gatewayNo\":\"%s\",\"userkey\":\"%s\"}&^!", gateWay, userKey);
        Serial.write (cmd);
    }
}
