//Implemetation of Composition

#include<iostream>
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
    BankAccount(int n, double b){
    accNo=n;
    accBal=b;
    }
    void debitAccount(double amt){
    accBal-=amt;
    }
    void creditAccount(double amt){
    accBal+=amt;
    }
    void printAccount(){
    cout<<accNo<<":"<<accBal<<endl;
    }
};

class Customer{
private:
    int custId;
    string name;
    BankAccount ba; // Declare with default and reinitialized in constructor, it can be implemented                                                                                //differently, this is one possible solution
  public:
    Customer(){
    custId=0;
    name="";
    }
    Customer(int id, string n,BankAccount ba1){
    custId=id;
    name=n;
    ba=ba1;  // initialized
    }
    void printCustomer(){
    cout<<custId<<":"<<name<<endl;
    ba.printAccount();
    }
};
/*
int main()
    {
        BankAccount acc1(1001,10000);
        Customer c1(1,"akash",acc1);
        c1.printCustomer();
        return 0;
    }*/
