//const function and object

#include<iostream>
using namespace std;


class A{
private:
     int a;
public:
    A(){
    this->a=0;
    }
    A(int a){
    this->a=a;
    }
    void setA (int a) const{
    //this->a=a;
    }
    int getA () const
    {
    return a;
    }
    void setAA(int a){
    this->a=a;
    }
};
/*
int main(){

const A obj (10);
//obj.setAA(20);

cout<<obj.getA()<<endl;
return 0;
}*/
