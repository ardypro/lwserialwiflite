#include "lwgenericclient.h"

void lwGenericClient::upload()
{
    uploadValue(); //由各子类来实现，提交完数据之后，复位cmdJSON和lastTime.
    clearCommand();
    lastTime = millis();
};

void lwGenericClient::clearCommand()
{
    cmdJSON = (char*) malloc (1);
    strcpy (cmdJSON, "");
}

void lwGenericClient::appendCommand (const char* cmd)
{
    int n = strlen (cmd) + strlen (cmd);
    cmdJSON = (char*) malloc (n);

}
