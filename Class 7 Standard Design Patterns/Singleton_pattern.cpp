//Demo1: Singleton: only one object is created.

#include <iostream>

using namespace std;

class Singleton {
   static Singleton *instance;
   int data;
   // Private constructor so that no objects can be created.
   Singleton() {
      data = 0;
   }
   public:
   static Singleton *getInstance() {
      if (!instance)
      instance = new Singleton;
return instance;
   }
   int getData() {
      return this -> data;
   }
   void setData(int data) {
      this -> data = data;
   }
};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;
/*
int main(){
   // Singleton singleton;// compiler ERROR

    //object1
   Singleton *s = s->getInstance();

   cout <<"s:"<<s->getData() << endl;
   s->setData(100);
   cout <<"s:"<< s->getData() << endl;
   //s1 refer to s
   Singleton *s1 = s1->getInstance();
   //s1->setData(1);
   cout <<"s1:"<<s1->getData() << endl;
    //s2 refer to s
    Singleton *s2 = s2->getInstance();

    s2->setData(0);     // reset data

    cout <<"s2:"<< s2->getData() << endl;//getData() from pointer s2
    cout <<"s:"<<s->getData() << endl; //getData() from pointer s
    //Observe the out put you are getting the same output
   return 0;
}*/
