#ifndef LWSERIALWIFILITE_H
#define LWSERIALWIFILITE_H

#include <lwgenericclient.h>
#include "Arduino.h"
#include "include/conversion.h"

class lwSerialWifiLite : public lwGenericClient
{
public:
    /** Default constructor */
    lwSerialWifiLite (const char* userkey, const char* gateway) : lwGenericClient (userkey, gateway)
    {
        intervalUpdate = 50000;     //50s
        lastUpdate = millis();
    };

    virtual  void update();         //发心跳包
    virtual  void append (const char* sensor, bool value);
    virtual  void append (const char* sensor, int value);
    virtual  void append (const char* sensor, unsigned int value);
    virtual  void append (const char* sensor, long value);
    virtual  void append (const char* sensor, unsigned long value);
    virtual  void append (const char* sensor, double value, uint8_t digits=2);
    virtual  void append (const char* sensor, char* value);

    //virtual void upload();          //上传数据

protected:
    virtual void uploadValue();     //上传数据方法的执行部分
private:
    unsigned long lastUpdate;       //上次心跳包发送时间
    unsigned int intervalUpdate;    //心跳包发送间隔

};

#endif // LWSERIALWIFILITE_H
