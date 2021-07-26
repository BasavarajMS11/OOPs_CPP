// Implementation of uses relationship

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
public:
    Customer(){
    custId=0;
    name="";
    }
    Customer(int id, string n){
    custId=id;
    name=n;
    }
//The BankAccount object is passed as a parameter to any function of the container class
    void printCustomer(BankAccount ba){
    cout<<custId<<":"<<name<<endl;
    ba.printAccount();
    ba.creditAccount(100);
    ba.printAccount();
    }
};

int main(){
    Customer c1(1,"a");
    BankAccount ba(1001,1000);
    c1.printCustomer(ba);
return 0;
}
