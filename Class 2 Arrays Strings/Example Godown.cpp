#include<iostream>
using namespace std;
class Good{
public:
    int type;
    int noOfPackets;
    Good(){
    type=0;
    noOfPackets=0;
    }
    Good(int t, int nop){
    type=t;
    noOfPackets=nop;
    }
    void printGood(){
    cout<<type<<":"<<noOfPackets<<endl;
    }
};
class Godown{
public:
    string name;
    bool operationStatus;
    Good* goods;
    int totalPackets;
    int capacity;
    Godown(string n, int c, int p){
    name=n;
    capacity=c;
    totalPackets=p;
    }
    void printGodown1(){
    cout<<name<<":"<<capacity<<":"<<totalPackets<<endl;
    }
    void addGoods(int ttype, int packets){

            for(int i=0;i<3;i++){
            if(goods[i].type==ttype){
                if(capacity>totalPackets){
                goods[i].noOfPackets+=packets;
                totalPackets+=packets;}
                else{cout<<"Godown is closed"<<endl;}
            }
        }
    }
    void removeGood(int ttype, int packets){

        for(int i=0;i<3;i++){
            if(goods[i].type==ttype){

                if(goods[i].noOfPackets>0){
                goods[i].noOfPackets-=packets;
                totalPackets-=packets;}

            }
            //cout<<totalPackets<<endl;
        }

    }
    void printGodown2(){
        cout<<name<<":"<<capacity<<":"<<totalPackets<<endl;
        for(int i=0;i<3;i++){

            cout<<goods[i].type<<":"<<goods[i].noOfPackets<<endl;
        }
    }
};
/*
int main(){

Godown g("G",1000,0);
Good g1(1,100),g2(2,200),g3(3,300);
g.totalPackets=g1.noOfPackets+g2.noOfPackets+g3.noOfPackets;
Good ggoods[]={g1,g2,g3};
g.goods=ggoods;
g.printGodown2();
g.printGodown1();
g.addGoods(1,100);
g.printGodown1();
g.removeGood(1,100);
g.printGodown1();
g.printGodown2();
return 0;
}*/
