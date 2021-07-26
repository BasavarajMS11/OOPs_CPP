//static data and functions
#include<iostream>
using namespace std;

class A{
private:
    //static int objectCount;
public:
    static int objectCount;
    A(){
    objectCount++;
    }
    void getCount(){
    cout<<objectCount<<endl;
    }
    static void printCount(){
    cout<<"Number of Object:"<<objectCount<<endl;
    }
    void display(string="Display called");
    inline void displayData(){
    }
    static void sayHello(string name){
    cout<<" Hello "<<name<<endl;
    }
};
int A::objectCount=0;
void A::display(string str){
cout<<str<<endl;
}

int main(){

A obj1,obj2,obj3,obj4;

cout<<A::objectCount<<endl;
obj1.display();
//obj1.getCount();
//obj1.printCount();
A::printCount();

obj1.sayHello("Friend");
A::sayHello("Guys");
return 0;
}

