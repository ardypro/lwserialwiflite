#ifndef IPOST_H
#define IPOST_H

/*
    数据发送接口
    v1.0    @ 2013-10-01
*/


class IPost
{
public:
    IPost()
    {
        interval=10000; //默认发送间隔为10秒
    }

    virtual void appendValue(char* sensor, bool value)=0;
    virtual void appendValue(char* sensor, int value)=0;
    virtual void appendValue(char* sensor, unsigned int value)=0;
    virtual void appendValue(char* sensor, long value)=0;
    virtual void appendValue(char* sensor, unsigned long value)=0;
    virtual void appendValue(char* sensor, double value)=0;
    virtual void appendValue(char* sensor, char* value)=0;

    virtual void sendValue();

    unsigned int interval;
    unsigned long lastTime;

};

#endif // IPOST_H
