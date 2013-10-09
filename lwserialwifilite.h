#ifndef LWSERIALWIFILITE_H
#define LWSERIALWIFILITE_H

#include <lwgenericclient.h>


class lwSerialWifiLite : public lwGenericClient
{
public:
    /** Default constructor */
    lwSerialWifiLite (const char* userkey, const char* gateway) : lwGenericClient (userkey, gateway)
    {

    };

    virtual  unsigned int getLastErr();
    virtual  void update();
    virtual  void append (const char* sensor, bool value);
    virtual  void append (const char* sensor, int value);
    virtual  void append (const char* sensor, unsigned int value);
    virtual  void append (const char* sensor, long value);
    virtual  void append (const char* sensor, unsigned long value);
    virtual  void append (const char* sensor, double value);
    virtual  void append (const char* sensor, char* value);

    virtual void upload();

protected:
    virtual void uploadValue();
private:
};

#endif // LWSERIALWIFILITE_H
