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
    BankAccount ba;  //customer owns BankAccount
    Customer()
    {
        custId=0;
        name="";

    }
    Customer(int id,string n,BankAccount bal)
    {
        custId=id;
        name=n;
        ba=bal;
    }
    void debitAccount(double amt){
    ba.debitAccount(amt);
    }
    void creditAccount(double amt){
    ba.creditAccount(amt);
    }
    void printAccount(){
    cout<<custId<<":"<<name<<endl;
    ba.printAccount();
    }
    void transferAmount(BankAccount &ba1,double amt)  //Pass by reference
    {
        ba.debitAccount(amt);
        ba1.creditAccount(amt);
    }
};/*
int main()
{  BankAccount acc1(1000,2000),acc2(3000,4000);

   Customer c1(1,"A",acc1),c2(2,"B",acc2);
   c1.printAccount();
   c2.printAccount();
   c1.transferAmount(c2.ba ,100);
   c1.printAccount();
   c2.printAccount();
   return 0;
}*/
