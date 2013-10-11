#include <Arduino.h>
#include "lwserialwifilite.h"

const char* Userkey = "jack";
const char* Gateway = "01";

lwSerialWifiLite client (Userkey, Gateway);

void setup()
{
    Serial.begin (9600);
    //client.lastTime = 200;

    const char* sensor;
    sensor = "humidy";
    sensor = "humidity";

    client.update();
    //client.append (sensor, 10);
    const char* s="temperature";
    int i=234;
    Serial.println("setup");
    client.upload();

}

void loop()
{

}
