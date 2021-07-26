//Demo5: Strategy Pattern
#include<iostream>
using namespace std;

class Strategy{
public:
    virtual int doOperation(int num1, int num2)=0;
    virtual ~Strategy(){}
};
class OperationAdd:public Strategy{
public:
    int doOperation(int num1, int num2){
    return num1+num2;
    }
    virtual ~OperationAdd(){}
};
class OperationSubtract:public Strategy{
public:
    int doOperation(int num1, int num2){
    return num1-num2;
    }
    virtual ~OperationSubtract(){}
};
class OperationMultiply:public Strategy{
public:
    int doOperation(int num1, int num2){
    return num1*num2;
    }
    virtual ~OperationMultiply(){}
};
class Context{
protected:
    Strategy* m_strategy;
public:
    Context(Strategy* strategy){
    m_strategy=strategy;
    }
    int executeStrategy(int num1,int num2){
    return m_strategy->doOperation(num1,num2);
    }

};
/*
int main(){
    Context* context =new Context(new OperationAdd());
    cout<<"Adding Strategy"<<endl;
    cout<<context->executeStrategy(10,10)<<endl;
    cout<<"Subtracting Strategy"<<endl;
    context=new Context(new OperationSubtract());
    cout<<context->executeStrategy(20,10)<<endl;
    cout<<"Multiplication Strategy"<<endl;
    context=new Context(new OperationMultiply());
    cout<<context->executeStrategy(10,10)<<endl;
return 0;
}*/


