#include <Arduino.h>
#include "lwserialwifilite.h"
#include "include\conversion.h"
#include "string.h"


const char* Userkey = "jack";
const char* Gateway = "01";

lwSerialWifiLite client (Userkey, Gateway);


void testAppend()
{
    const char* sensor;
    sensor = "humidy";
    sensor = "humidity";

    client.update();

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
    Serial.println ("end append");
    //client.upload();

}

void setup()
{
    Serial.begin (9600);
    //client.lastTime = 200;


    testAppend();
}

void loop()
{
    //testAppend();
}
