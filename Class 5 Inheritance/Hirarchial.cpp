//Hierarchical Inheritance: Bankaccount<-SavingsAccount<- Currentaccount
//Refer ppt for problem statement
#include<iostream>
using namespace std;

class BankAccount{
protected:
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
    void debitAccount(double amt){
    accBal-=amt;
    }
    void creditAccount(double amt){
    accBal+=amt;
    }
};
class SavingsAccount:public BankAccount{
public:
    int noOfTransactions;
    double penaltyAmt;
    SavingsAccount():BankAccount(){
    accNo=0;
    accBal=0;
    penaltyAmt=0;
    noOfTransactions=0;
    }
    SavingsAccount(int n, double b,int n1,double p):
        BankAccount(n,b){
        noOfTransactions=n1;
        penaltyAmt=p;
        }
    void printAccount(){
    BankAccount::printAccount();
    cout<<noOfTransactions<<":"<<penaltyAmt<<endl;
    }
    //function overriding
    void debitAccount(double amt){
    if(accBal>0 && accBal>500){
    if(accBal-amt>=500){
        accBal-=amt;
        noOfTransactions++;
        if(noOfTransactions>5){

            penaltyAmt+=20;
            accBal-=20;
        }
    }
    else{ cout<<"Debit failed"<<endl;}
    }

    }
    void printTransactions(){
    cout<<noOfTransactions<<endl;
    }
};
class CurrentAccount:public BankAccount{
public:
    CurrentAccount():BankAccount(){};
    CurrentAccount(int n,double b):BankAccount(n,b){
    }

};
/*
int main(){
SavingsAccount sa(1001,2000,0,0);
CurrentAccount ca(1002,2000);

ca.debitAccount(100);
ca.printAccount();


return 0;
}*/
