#include<iostream>
using namespace std;

class TollBooth{
private:
    int noOfCars;
    double tollCharges;
public:
    TollBooth(){
    noOfCars=0;
    tollCharges=0;
    }
    void payingCar(){
    noOfCars++;
    tollCharges+=0.5;
    }
    void noPayCar(){
    noOfCars++;
    }
    void printTollBooth(){
    cout<<"noOfCars="<<noOfCars<<":"<<"Toll collection"<<tollCharges<<endl;
    }
};
/*
int main(){

TollBooth tollBooth;
int x=1;

int ch=0;


while(x>0){
    cout<<"Paying car 1 No pay car 2"<<endl;
    cin>>ch;
    switch(ch){
    case 1: tollBooth.payingCar();
            break;
    case 2: tollBooth.noPayCar();
            break;
    }
    cout<<"continue?"<<endl;
    cin>>x;
    if(x<1)
        continue;
}

tollBooth.printTollBooth();

return 0;
}*/
