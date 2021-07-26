#include <iostream>
using namespace std;
class A{
private:
    const int a=10;
public:
    A(){
    //this->a=0;
    }
    A(int a){
    //this->a=a;
    }
    void setA(int a){
    //this->a=a;
    }
    int getA(){
    return a;
    }
};
/*
int main()
{    A obj(10);
    //obj.setA();
    cout<<obj.getA()<<endl;
    return 0;
}*/

