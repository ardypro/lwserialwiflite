#include <Arduino.h>
#include "lwserialwifilite.h"

const char* Userkey = "jack";
const char* Gateway = "01";

lwSerialWifiLite client (Userkey, Gateway);

void setup()
{
//    Serial.begin(9600);
//    Serial.print("interval value:\t");
//    Serial.println(client.interval);
//
//
//    client.lastTime=200;
//    Serial.print("lasttime\t");
//    Serial.println(client.lastTime);
//
//    Serial.print("user key:\t");
//    Serial.println(client.userKey);

    const char* sensor;
    sensor = "humidy";
    sensor = "humidity";

    client.appendValue (sensor, 10);

}

void loop()
{

}
