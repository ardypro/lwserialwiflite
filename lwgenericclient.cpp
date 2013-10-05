#include "lwgenericclient.h"


void lwGenericClient::append (const char* sensor, bool value)
{

};

void lwGenericClient::append (const char* sensor, int value)
{

};

void lwGenericClient::append (const char* sensor, unsigned int value)
{

};

void lwGenericClient::append (const char* sensor, long value)
{

};

void lwGenericClient::append (const char* sensor, unsigned long value)
{

};

void lwGenericClient::append (const char* sensor, double value)
{

};

void lwGenericClient::append (const char* sensor, char* value)
{

};


void lwGenericClient::upload()
{
    lastTime = millis();
    //post values to the server
};

unsigned int lwGenericClient::getLastErr()
{

}
