/*
Function overloading (static polymorphism ):-
Create a class Addition and write functions to add int, float, double, long numbers.
Write a main function create object and call functions.
*/

#include<iostream>
using namespace std;

class Addition{
public:
    int addNums(int a, int b){
    return a+b;
    }
    float addNums(float a, float b)
    {
    return a+b;
    }
    long addNums(long a, long b){

    return a+b;
    }
    double addNums(double a, double b){
    return a+b;
    }

};
/*
int main(){

Addition addition;
float f=addition.addNums(1.0F,5.1F);
cout<<f<<endl;
cout<<addition.addNums(1,1)<<":"<<
addition.addNums(1.0F,1.0F)<<":"<<
addition.addNums(1L,1L)<<":"<<
addition.addNums(2.0,2.0)<<endl;
return 0;
}*/

