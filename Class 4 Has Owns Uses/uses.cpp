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
class Customer{   //container
public:

    int custId;
    string name;
    //customer cannot have BankAccount
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
    void printAccount(BankAccount &ba){
    cout<<custId<<":"<<name<<endl;
    cout<<ba.getAccNo()<<":"<<ba.getAccBal()<<endl;
    }

    void debitAccount(double amt,BankAccount &ba){
    ba.debitAccount(amt);
    }
    void creditAccount(double amt,BankAccount &ba){
    ba.creditAccount(amt);
    }
    /*void printAccount(){
    cout<<custId<<":"<<name<<endl;
    bprintAccount();
    }*/
    void transferAmount(BankAccount &ba,BankAccount &ba1,double amt)  //Pass by reference
    {
        ba.debitAccount(amt);
        ba1.creditAccount(amt);
    }
};/*
int main()
{  BankAccount acc1(1000,2000),acc2(3000,4000);

   Customer c1(1,"A"),c2(2,"B");
   c1.printAccount(acc1);
   c2.printAccount(acc2);

   c1.creditAccount(1000,acc1);
   c2.creditAccount(1000,acc2);
   //c1.transferAmount(c2.ba ,100);
   //c1.printAccount();
   //c2.printAccount();

   c1.printAccount(acc1);
   c2.printAccount(acc2);
   c1.transferAmount(acc1,acc2 ,1000);
   c1.printAccount(acc1);
   c2.printAccount(acc2);
   return 0;
}*/
