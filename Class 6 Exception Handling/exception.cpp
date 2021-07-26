#include<iostream>
using namespace std;
class Aexp
{
    public:
    int x,y;
    static void throwMsg()
    {
        cout<<"throwMsg(): code before try-catch block"<<endl;
        try
        {
            throw "Division by zero exception";
        }
        catch(const char* s)
        {
            cout<<s<<endl;
        }
        cout<<"throwMsg():code later to exception"<<endl;

    }

    static void ecxeptionObj()
    {
        cout<<"ecxeptionObj(): code before try-catch block"<<endl;
        try
        {

            throw *(new exception() );
        }
        catch(exception e)
        {
            cout<<e.what()<<endl;
        }
         cout<<"ecxeptionObj(): code later to exception"<<endl;
    }
    static void trowNotExceptionClass()
    {
        cout<<"trowNotExceptionClass(): code before try-catch block"<<endl;
        try
        {
            Aexp obj; obj.x=1; obj.y=2;
            throw obj;
            //throw *(new Aexp() );
        }
        catch(Aexp a)
        {
            cout<<a.x<<" "<<a.y<<endl;
        }
         cout<<"trowNotExceptionClass(): code later to exception"<<endl;
    }
    static void divideByZero()
    {
        cout<<"divideByZero(): code before try-catch block"<<endl;
        try
        {
            int a=1/0;
        }
        catch(exception& e)
        {
            cout<<e.what()<<endl;
        }
        //catch all may not work in windows
        //did not work
        catch(...)
        {
            cout<<"catch all block: earlier catch block didnt match object being thrown"<<endl;
        }
         cout<<"divideByZero(): code later to exception"<<endl;
    }
};
int main()
{

    //Aexp::throwMsg();
    //Aexp::ecxeptionObj();
    Aexp::trowNotExceptionClass();
    //Aexp::divideByZero();//did not work since error is thrown again  from runtime



}
