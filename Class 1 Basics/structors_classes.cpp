#include<iostream>
using namespace std;
struct Course{
int courseId;
string courseTitle;
int credits;
};
class Student{
public:
    int stuId;
    string name;
    int sem;
    Course course;
    Student(){
    stuId=0;
    name="";
    course.courseId=0;
    course.courseTitle="";
    course.credits=0;
    }
    Student(int stuId, string name,int sem){
    this->stuId=stuId;
    this->name=name;
    this->sem=sem;
    cout<<"Enter course details"<<endl;
    cin>>this->course.courseId;
    cin>>this->course.courseTitle;
    cin>>this->course.credits;

    }
    void printStudent(){
    cout<<stuId<<":"<<name<<":"<<sem<<
    ":"<<course.courseId<<":"
    <<course.courseTitle<<":"<<course.credits
    <<endl;
    }
};
struct Employee:public Student{

};
/*
int main()
{
//Student s2;
Student s1(1,"AA",4);
s1.printStudent();
return 0;
}
*/
