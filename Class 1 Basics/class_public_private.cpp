#include<iostream>
using namespace std;

class Student{
private:
    int stuId;
    string name;
    int age;
    string address;
    int sem;

public:
    //setters
    void setId(int Id){
    stuId=Id;
    }
    void setName(string n){ name=n;}
    void setAge(int a){age=a;}
    void setAddress(string add){address=add;}
    void setSem(int s){sem=s;}
    //getters
    int getId(){return stuId;}
    string getName(){return name;}
    int getAge(){return age;}
    string getAddress(){return address;}
    int getSem(){return sem;}

    void setDetails(int id, string n, int a, int s,string add){
    stuId=id;name=n;age=a;sem=s;address=add;
    }
    void printDetails(){
    cout<<stuId<<":"<<name<<":"<<sem<<":"<<age<<":"<<address<<endl;
    }
    //print student details


};
/*
int main(){
//create object
Student s1;
s1.setId(101);
s1.setName("John");
s1.setAge(18);
s1.setSem(4);
s1.setAddress("Vidyanagar");
cout<<s1.getId()<<":"<<s1.getName()<<endl;
s1.setDetails(102,"Sanjay",18,4,"Ravi Nagar");
s1.printDetails();
bool b=false, b1=true;
bool b2=1;
cout<<b<<b1<<b2<<endl;


return 0;
}*/
