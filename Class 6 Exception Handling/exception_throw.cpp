#include<iostream>
using namespace std;
class aThrow
{
public:
    void demoThrow(int i) throw(int, exception)
    {
        if(i==1)
            throw i;
        else
            throw exception();
    }
};

int main()
{
    aThrow a;
    try
    {
        a.demoThrow(9);
    }
    catch(int i)
    {
        cout<<"int";
    }
    catch(exception e)
    {
        cout<<e.what();
    }
}