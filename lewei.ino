#include <Arduino.h>
#include "lwserialwifilite.h"
#include "conversion.h"
#include "string.h"


const char* Userkey = "jack";
const char* Gateway = "01";

lwSerialWifiLite client(Userkey, Gateway);

void testAppend1()
{
    char* L;
    unsigned int l=78556;
    converter.uintToStr(l,L);
    DEBUG.println(L);


    const char* key="029b3884b91e4d00b514158ba1e2ac57";
    const char* gate="01";

    lwSerialWifiLite client(key, gate);

    char* fc;
    fc=(char*) malloc(1);

    const char* sensor="WD";
    int t=-302;
    const char* h="SD";
    float f=-2359.9002;

    client.append(sensor,t);
    client.append(h,f);
    client.append(h,l);
    client.upload();


    client.update();

    converter.FreeAndNil(fc);
}

void testAppend()
{
    const char* sensor;
    sensor = "humidy";
    sensor = "humidity";

    //client.update();

    Serial.println("");
    Serial.println("begin append");
    Serial.println("");
    const char* s = "temperature";
    int i = 234;
    client.append(s,i);

    Serial.println("");

    double d=239.064;
    client.append(s,d);

    Serial.println("");
    Serial.println("end append");
    Serial.println("start uploading");

    client.upload();

}

void setup()
{
    Serial.begin(9600);
    //client.lastTime = 200;


    testAppend1();
}

void loop()
{
    testAppend1();
    delay(60000);
}
