#include <iostream>

using namespace std;

class A{
private:
    static int x=0;
public:
    //int x;
    A()
    {

    }
    int getA()
    {
        return x;
    }
    static void printData()
    {
        cout<<"DATA"<<endl;
    }
    static void printData(string str)
    {
        cout<<str<<endl;
    }
};

int A::x=0;//Definition

int main()
{
    A obj;
    cout<<obj.getA()<<endl;
 //cout<<A::x<<endl;
    A::printData();
    A::printData("BVBCET");
    return 0;
}
