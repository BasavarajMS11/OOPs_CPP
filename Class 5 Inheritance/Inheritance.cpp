//Inheritance
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
    accBal+=amt;
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
/*
int main(){

BankAccount ba(1001,1000);
SavingsAccount sa(1001,2000,0,0);
ba.printAccount();
sa.printAccount();
sa.debitAccount(500);
sa.printTransactions();
sa.debitAccount(500);
sa.printTransactions();
sa.debitAccount(500);
sa.printTransactions();
sa.debitAccount(500);
sa.printTransactions();
sa.printAccount();

//ba=sa;
//ba.printAccount();


return 0;
}*/
