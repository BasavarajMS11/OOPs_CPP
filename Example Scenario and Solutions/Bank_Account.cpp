#include<iostream>
using namespace std;

class BankAccount1{
    int accNo;
    float accBalance;
public:
    BankAccount1(){
    this->accNo=0;
    this->accBalance=0;
    }
    BankAccount1(int accNo,float accBalance){
    this->accNo=accNo;
    this->accBalance=accBalance;
    }
    void printAccountDetails(){
    cout<<this->accNo<<":"<<this->accBalance<<endl;
    }
    ~BankAccount1(){
    cout<<"Destructor called"<<endl;
    }
};
/*
int main(){
BankAccount1 acc1;
BankAccount1 acc2(1002,2000);
BankAccount1 acc3(acc2);
acc1.printAccountDetails();
acc2.printAccountDetails();
acc3.printAccountDetails();

return 0;
}*/
