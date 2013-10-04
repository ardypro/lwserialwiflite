#include "lwgenericclient.h"


void lwGenericClient::appendValue (const char* sensor, bool value)
{

};

void lwGenericClient::appendValue (const char* sensor, int value)
{

};

void lwGenericClient::appendValue (const char* sensor, unsigned int value)
{

};

void lwGenericClient::appendValue (const char* sensor, long value)
{

};

void lwGenericClient::appendValue (const char* sensor, unsigned long value)
{

};

void lwGenericClient::appendValue (const char* sensor, double value)
{

};

void lwGenericClient::appendValue (const char* sensor, char* value)
{

};


void lwGenericClient::sendValue()
{
    lastTime = millis();
//post values to the server
};

unsigned int lwGenericClient::getLastErr()
{

}
