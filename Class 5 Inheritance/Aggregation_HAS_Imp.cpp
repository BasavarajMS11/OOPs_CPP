// Implementation of Aggregation

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
    BankAccount* ba;   // Declaration only, no object created
    Customer(){
    custId=0;
    name="";
    }
    Customer(int id, string n){
    custId=id;
    name=n;
    }
    void printCustomer(){
    cout<<custId<<":"<<name<<endl;
    ba->printAccount();
    }
};
/*
int main(){

Customer c1(1,"a");
c1.ba=new BankAccount(1001,1000); // Object created and assigned .  If the customer is destroyed //still the bank account alive
c1.printCustomer();
c1.ba->creditAccount(100);
c1.printCustomer();

return 0;
}*/
