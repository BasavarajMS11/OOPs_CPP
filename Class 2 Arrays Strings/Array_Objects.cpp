#include<iostream>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

class Student
{ private:
    int stuId;
    string fName;
    string lName;
    int age;
    int sem;
    string address;
    int marks[5][3];

  public:
      Student(){
         stuId=0;
         fName="";
         lName="";
         age=0;
         sem=0;
         address="";
        }

       Student(int stuId,string fName,string lname,int age,int sem,string address){
         this->stuId=stuId;
         this->fName=fName;
         this->age=age;
         this->sem=sem;
         this->address=address;
         cout<<"Enter Marks ISA1, ISA2, ESA for 5 courses:"<<endl;
         for(int i=0;i<5;i++)
         {
           for(int j=0;j<3;j++)
           {
              cin>>marks[i][j];
           }
         }

       }
       void printStudent(){
          cout<<stuId<<":"<<fName<<":"<<lName<<":"<<age<<":"<<sem<<":"<<address<<":"<<endl;
          cout<<"\n";
          for(int i=0;i<5;i++)
         {
           for(int j=0;j<3;j++)
           {
              cout<<marks[i][j]<<"\t";
           }
           cout<<"\n";
         }
       }
       void changeSem(int newSem)
       {
           this->sem=newSem;
       }
       void changeAge(int newAge)
       {
           this->age=newAge;
       }

};

/*
int main()
{
    Student s1;
    s1.printStudent();
    Student s2(1000,"Basu","A",19,4,"KLETECH");
    s2.printStudent();
    int ch,age,sem;
    cout<<"Enter choice\n1-change sem\n2-change age"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Enter new sem"<<endl;
               cin>>sem;
               s2.changeSem(sem);
               s2.printStudent();
               break;
        case 2:cout<<"Enter new age"<<endl;
               cin>>age;
               s2.changeAge(age);
               s2.printStudent();
               break;
        default:exit(0);

 //   }

    Student s1(1,"Basavaraj","A",18,4,"Garag"),
    s2(1,"Basavaraj","A",18,4,"Garag"),
    s3(1,"Basavaraj","A",18,4,"Garag"),
    s4(1,"Basavaraj","A",18,4,"Garag"),
    s5(1,"Basavaraj","A",18,4,"Garag");
    Student students[5];
    students[0]=s1;
    students[1]=s2;
    students[2]=s3;
    students[3]=s4;
    students[4]=s5;

    int marks[5][3];
    //int marks1[]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        students[i].printStudent();
    }

    return 0;
}*/

