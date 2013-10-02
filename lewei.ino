#include <Arduino.h>
//#include "iget.h"
//#include "ipost.h"
//#include "icontrollable.h"
#include "lwgenericclient.h"
#include "lwserialwifilite.h"


/*
  Turns on an LED on for one second, then off for one second, repeatedly.
*/

const char* Userkey="jack";
const char* Gateway="01";

lwSerialWifiLite client(Userkey, Gateway);

void setup()
{
    Serial.begin(9600);
    Serial.print("interval value:\t");
    Serial.println(client.interval);


    client.lastTime=200;
    Serial.print("lasttime\t");
    Serial.println(client.lastTime);

    Serial.print("user key:\t");
    Serial.println(client.userKey);
}

void loop()
{

}