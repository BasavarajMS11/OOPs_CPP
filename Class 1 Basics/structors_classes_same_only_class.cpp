#include<iostream>
using namespace std;

class Course{
private:
    int courseId;
    string courseTitle;
    int credits;
public:
    Course(int courseId,string courseTitle,int credits){
    this->courseId=courseId;
    this->courseTitle=courseTitle;
    this->credits=credits;
    }
    //pass by reference or alias
    //remove the symbol prefixed to course and try the program
    void modifyCourse(Course &course)
    {
    course.credits=10;
    }
    void printCourse(){
    cout<<courseId<<":"<<credits<<endl;
    }
};
/*
int main(){
Course c1(1,"java",3);
c1.printCourse();
c1.modifyCourse(c1);
c1.printCourse();

return 0;
}
*/
