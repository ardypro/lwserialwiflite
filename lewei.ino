#include <Arduino.h>
#include "lwserialwifilite.h"
#include "include\conversion.h"
#include "string.h"


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

    client.append (sensor, (int)10);
    const char* s = "temperature";
    int i = 234;
    Serial.println ("setup");
    //client.upload();


    char* f;
    Serial.print ("converter:");
    converter.floatToStr(208976.8763,3,f);
    Serial.println (f);


    char *str;

    /* Initial memory allocation */
    str = (char *) malloc (15);
    strcpy (str, "tutorialspoint");
    printf ("String = %s,  Address = %u\n", str, str);

    Serial.println (str);
    /* Reallocating memory */
    str = (char *) realloc (str, 25);
    strcat (str, ".com");
    printf ("String = %s,  Address = %u\n", str, str);

    Serial.println (str);
    free (str);
}

void loop()
{

}
