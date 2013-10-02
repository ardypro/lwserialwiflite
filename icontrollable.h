#ifndef ICONTROLLABLE_H
#define ICONTROLLABLE_H
/*
    ������ƽӿ�

    �󲿷ִ���ֱ�ӽ����������leweitcp���

    v1.0    @ 2013-10-01
*/

struct controlFunctionNode
{
    void (*controlFunctionAddr0)();
    void (*controlFunctionAddr1)(char*);
    void (*controlFunctionAddr2)(char*,char*);
    const char *controlFunctionName;
    controlFunctionNode*next;
};

class controlFunction
{
public:
    controlFunction(void (*callbackFunction)(),const char *controlFunctionName);
    controlFunction(void (*callbackFunction)(char*),const char *controlFunctionName);
    controlFunction(void (*callbackFunction)(char*,char*),const char *controlFunctionName);

    void (*controlFunctionAddr0)();
    void (*controlFunctionAddr1)(char*);
    void (*controlFunctionAddr2)(char*,char*);

    const char *controlFunctionName;
private:
    controlFunction *next;
    friend class IControllable;
};

class IControllable
{
public:
    IControllable();

    //ע����ƺ���
    virtual void registerCtrlFunction(controlFunction &ctrlFunction)=0;
    virtual void registerCtrlFunction(controlFunction &ctrlFunction, char* result, char* returnMessage)=0;

    //ִ�лص�����
    virtual	void execute(void (*callbackFunction)())=0;
    virtual void execute(void (*callbackFunction)(char*), char* param)=0;
    virtual void execute(void (*callbackFunction)(char*,char*), char* param1, char* param2)=0;
protected:
private:
};

#endif // ICONTROLLABLE_H
