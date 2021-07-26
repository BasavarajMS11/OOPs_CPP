#include <iostream>

using namespace std;
class BankAccount{
private:
    int accNo;
    double accBal;
public:
    BankAccount(){
    accNo=0;
    accBal=0;
    }
    BankAccount(int n,double b){
    accNo=n;
    accBal=b;
    }
    void printAccount(){
    cout<<accNo<<":"<<accBal<<endl;
    }
    void setAccNo(int n)
    {
        accNo=n;
    }
    int getAccNo()
    {
        return accNo;

    }
     void setAccBal(double b)
    {
        accBal=b;
    }
    double getAccBal()
    {
        return accBal;

    }
    void debitAccount(double amt)
    {
        accBal-=amt;
    }
    void creditAccount(double amt)
    {
        accBal+=amt;
    }

};
class Customer{
public:
    int custId;
    string name;
    BankAccount* ba;  //customer has BankAccount
    Customer()
    {
        custId=0;
        name="";
    }
    Customer(int id,string n)
    {
        custId=id;
        name=n;
    }
    void debitAccount(double amt){
    ba->debitAccount(amt);
    }
    void creditAccount(double amt){
    ba->creditAccount(amt);
    }
    void printAccount(){
    cout<<custId<<":"<<name<<endl;
    ba->printAccount();
    }
    void transferAmount(BankAccount* ba1,double amt)
    {
        ba->debitAccount(amt);
        ba1->creditAccount(amt);
    }
    };

int main()
{   //BankAccount acc1(100,2000);
    //acc1.printAccount();
    Customer c1(1,"a"),c2(2,"b");
    c1.ba=new BankAccount(1000,2000); //Allocating memory
    c2.ba=new BankAccount(1001,4000);

    c1.creditAccount(100);
    c1.printAccount();
    c1.debitAccount(100);
    c2.printAccount();

    c1.transferAmount(c2.ba ,100);
    c1.printAccount();

    //cout << "Hello world!" << endl;
    return 0;
}
