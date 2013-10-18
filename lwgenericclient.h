#ifndef LWGENERICCLIENT_H
#define LWGENERICCLIENT_H

/*
    乐为物联网客户端基类

    v1.0 @2013-10-01
*/

#include "ipost.h"
#include "Arduino.h"

class lwGenericClient : public IPost
{
public:
    lwGenericClient (const char* userkey, const char* gateway) : IPost()
    {
        userKey = userkey;
        gateWay = gateway;
        cmdJSON=(char*) malloc(9);
        clearCommand();
        lastTime = millis();
    }

    lwGenericClient() : IPost()
    {
        lastTime = millis();
    }

    void setUserKey (const char* userkey)
    {
        userKey = userkey;
    }

    void setGateWay (const char* gateway)
    {
        gateWay = gateway;
    }

    virtual  void append (const char* sensor, bool value) = 0;
    virtual  void append (const char* sensor, int value) = 0;
    virtual  void append (const char* sensor, unsigned int value) = 0;
    virtual  void append (const char* sensor, long value) = 0;
    virtual  void append (const char* sensor, unsigned long value) = 0;
    virtual  void append (const char* sensor, double value) = 0;
    virtual  void append (const char* sensor, char* value) = 0;

    virtual void upload();

protected:
    virtual void uploadValue() = 0;
    const char* userKey;
    const char* gateWay;
    char* cmdJSON;

    virtual void clearCommand();
    virtual void appendCommand(const char* cmd);
    unsigned int interval;
    unsigned long lastTime;
private:

};

#endif // LWGENERICCLIENT_H
