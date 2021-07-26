
#include<iostream>
using namespace std;

class Sample{
private:
    int x;
public:
    Sample(){
    x=0;
    }
    Sample(int x){
    cout<<"parameter constructor"<<endl;
    this->x=x;
    }
    Sample(const Sample &sam){
    cout<<"copy constructor"<<endl;
    this->x=sam.x;
     }
};
/*
int main(){
Sample s1(10);
Sample s2=s1; // copy constructor is invoked
//Sample S3(S1);
s1=s2; //assignment

return 0;
}*/
