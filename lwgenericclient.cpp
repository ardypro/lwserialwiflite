#include "lwgenericclient.h"

void lwGenericClient::upload()
{
    uploadValue(); //由各子类来实现，提交完数据之后，复位cmdJSON和lastTime.
    //cmdJSON="";
    lastTime = millis();
};


