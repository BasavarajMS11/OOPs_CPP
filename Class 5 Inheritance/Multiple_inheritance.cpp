//Multiple Inheritance
//refer text book for scenario

#include<iostream>
using namespace std;
class Employee{
private:
    int empNo;
    string name;

public:
    static int count;
    Employee(){
    empNo=0;
    name="";
    }
    Employee(int n,string n1){
    empNo=n;
    name=n1;
    }
    void printEmp(){
    cout<<empNo<<":"<<name<<endl;
    }
};
int Employee::count=0;
class Manager:public Employee{
private:
    string title; //"Marketing etc"
    double clubDues;
public:
    Manager(int n,string en,string t, double d):
        Employee(n,en){
        title=t;
        clubDues=d;
        }
        void printEmp(){
        Employee::printEmp();
        cout<<title<<":"<<clubDues<<endl;
        }
    };
class Scientist:Employee{
private:
    int publications;
public:
    Scientist():Employee(){
    publications=0;
    }
    Scientist(int n,string s,int pub):
        Employee(n,s){
        publications=pub;
        }
    void printEmp(){
    Employee::printEmp();
    cout<<publications<<endl;
    }

};
class Laborer:public Employee{
public:
    Laborer():Employee(){

    }
    Laborer(int n,string n1):Employee(n,n1){

    }
    void printEmp(){
    Employee::printEmp();
    }

};
/*
int main(){

Employee e1(1,"aa");
e1.printEmp();
Manager m1(2,"d","Marketing",1000);
e1=m1;
e1.printEmp();
m1.printEmp();

return 0;
}*/

