#ifndef LWGENERICCLIENT_H
#define LWGENERICCLIENT_H

/*
    ��Ϊ�������ͻ��˻���

    v1.0 @2013-10-01
*/

#include "ipost.h"
#include "Arduino.h"

class lwGenericClient : public IPost
{
public:
    lwGenericClient(const char* userkey, const char* gateway):IPost()
    {
        userKey=userkey;
        gateWay=gateway;
        lastTime = millis();
    }

    virtual ~lwGenericClient()
    {

    };



    virtual  void appendValue(char* sensor, bool value);
    virtual  void appendValue(char* sensor, int value);
    virtual  void appendValue(char* sensor, unsigned int value);
    virtual  void appendValue(char* sensor, long value);
    virtual  void appendValue(char* sensor, unsigned long value);
    virtual  void appendValue(char* sensor, double value);
    virtual  void appendValue(char* sensor, char* value);

    virtual void sendValue();


//protected:
    const char* userKey;
    const char* gateWay;
    virtual unsigned int getLastErr(); //ȡ�����ִ�н���ķ���������ֵ
private:
};

#endif // LWGENERICCLIENT_H