#ifndef LWSERIALWIFILITE_H
#define LWSERIALWIFILITE_H

#include <lwgenericclient.h>


class lwSerialWifiLite : public lwGenericClient
{
public:
    /** Default constructor */
    lwSerialWifiLite(const char* userkey, const char* gateway):lwGenericClient(userkey,gateway)
    {

    };
    /** Default destructor */
    virtual ~lwSerialWifiLite()
    {

    };

virtual unsigned int getLastErr();

    virtual  void appendValue(char* sensor, bool value);
    virtual  void appendValue(char* sensor, int value);
    virtual  void appendValue(char* sensor, unsigned int value);
    virtual  void appendValue(char* sensor, long value);
    virtual  void appendValue(char* sensor, unsigned long value);
    virtual  void appendValue(char* sensor, double value);
    virtual  void appendValue(char* sensor, char* value);

    virtual void sendValue();

protected:
private:
};

#endif // LWSERIALWIFILITE_H