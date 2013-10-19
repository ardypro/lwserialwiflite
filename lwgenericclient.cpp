#include "lwgenericclient.h"
#include "include/conversion.h"

void lwGenericClient::upload()
{
    Serial.println("");
    Serial.println("upload in generic");

    uploadValue(); //由各子类来实现，提交完数据之后，复位cmdJSON和lastTime.
    clearCommand();
    lastTime = millis();
};

void lwGenericClient::clearCommand()
{
    Serial.println("");
    Serial.println("clearCommand");

    cmdJSON = (char*) realloc (cmdJSON,1);
    strcpy (cmdJSON, "");
}

void lwGenericClient::appendCommand (const char* cmd)
{
    converter.appendChar(cmdJSON, cmd);
}
