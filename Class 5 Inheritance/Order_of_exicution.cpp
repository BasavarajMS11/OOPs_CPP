#include<iostream>
using namespace std;

// Order of execution of constructors

class A{
public:
    A(){
    cout<<"A Constructor"<<endl;
    }
};
class B:public A{
public:
    B(){
    cout<<"B Constructor"<<endl;
    }

};
class C:public B{
public:
    C(){
    cout<<"C Constructor"<<endl;
    }
};
/*
int main(){

C obj;
return 0;
}*/

