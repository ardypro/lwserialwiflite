#ifndef LWSERIALWIFILITE_H
#define LWSERIALWIFILITE_H

#include "HardwareSerial.h"

#include "lwgenericclient.h"
#include "Arduino.h"
#include "conversion.h"

class lwSerialWifiLite : public lwGenericClient
{
public:
    /** Default constructor */
    lwSerialWifiLite(const char* userkey, const char* gateway) : lwGenericClient(userkey, gateway)
    {
        intervalUpdate = 50000;     //50s
        lastUpdate = millis();
        setLeadingChars();
    };

    virtual  void update();         //发心跳包
    virtual  void append(const char* sensor, bool value);
    virtual  void append(const char* sensor, int value);
    virtual  void append(const char* sensor, unsigned int value);
    virtual  void append(const char* sensor, long value);
    virtual  void append(const char* sensor, unsigned long value);
    virtual  void append(const char* sensor, double value,unsigned int digits=2);
    virtual  void append(const char* sensor, const char* value);

    virtual void upload();          //上传数据

protected:
    virtual void uploadValue();     //上传数据方法的执行部分
    virtual void clearCommand();
private:
    unsigned long lastUpdate;       //上次心跳包发送时间
    unsigned int intervalUpdate;    //心跳包发送间隔
    void setLeadingChars();
};

#endif // LWSERIALWIFILITE_H
