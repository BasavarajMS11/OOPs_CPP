/*
A marketing service provider company “swiggy” market the products of Sweetshops. 
The SweetShop prepares different sweet items. The SweetShop required to register with “swiggy” to market their products. 
Consider one shop register with marketing service provider which produces 5 items. 
There is a customer who can place order for sweets through marketing service provider. 
Identify objects and relationships and draw a class diagram.
Write a C++ program to order one or more items and print order details.
*/
#include <iostream>
using namespace std;

class SException{
public:
    int errNo;
    string errMsg;

    SException()
    {
        errNo=0;
        errMsg="";
    }

    SException(int m, string s)
    {
        errNo=m;
        errMsg=s;
    }

    void showError()
    {
        cout<<errNo<<":"<<errMsg<<endl;
    }
};

class SweetShop{
public:
    string name;
    int id;
    int qty;

    SweetShop()
    {
        name="";
        id=0;
        qty=0;
    }

    SweetShop(string n, int i,int sn)
    {
        name=n;
        id=i;
        qty=sn;
    }

    void getSweet()
    {
        cout<<"Enter shop name: "<<endl;
        cin>>name;
        cout<<"Enter shop id:"<<endl;
        cin>>id;
        cout<<"Enter quantity: "<<endl;
        cin>>qty;
    }
    void printSweet()
    {
        cout<<"Shop name"<<name<<" : "<<"Shop id"<<id<<" : "<<"quantity"<<qty<<endl;
    }
};

class Swiggy{
    public:
        int items;
        SweetShop shop;

        Swiggy()
        {
            items=0;
        }

        Swiggy(int n)
        {
            items=n;
        }

        void regShop(SweetShop sw)
        {
            shop.name=sw.name;
            shop.id=sw.id;
            shop.qty=sw.qty;
        }

        void getSwi()
        {
        	cout<<"items: 		"<<"\n"<<"1.Rasgulla"<<"\n"<<"2.Rasmalai"<<"\n"<<"3.GulabJamun"<<"\n"<<"4.Shrikhand"<<"\n"<<"5.Jalebi"<<endl;
            cout<<"Enter item number: "<<endl;
            cin>>items;
            if(items<=0 || items>5)
                throw SException(201,"order cannot be placed");
        }
        void printSw()
        {
            cout<<"Items"<<items<<endl;
            cout<<shop.name<<":"<<shop.id<<":"<<"qty:"<<shop.qty<<endl;
        }
};

class Customer{
public:
    string cName;
    int cId;
    string addr;
    Swiggy order;

    Customer()
    {
        cName="";
        cId=0;
        addr="";
    }

    Customer(string s, int i, string a)
    {
        cName=s;
        cId=i;
        addr=a;
    }

    void placeOrder(Swiggy s)
    {
        order.items=s.items;
        order.shop.name=s.shop.name;
        order.shop.id=s.shop.id;
        order.shop.qty=s.shop.qty;
    }

    void getCust()
    {
        cout<<"Enter customer name: "<<endl;
        cin>>cName;
        cout<<"Enter cust id:"<<endl;
        cin>>cId;
        cout<<"Enter cust address: "<<endl;
        cin>>addr;
    }
    void printOrder()
    {
        cout<<"Cust name:"<<cName<<" \n "<<"Cust id"<<cId<<" \n "<<"Address"<<addr<<endl;
        cout<<"items"<<":"<<order.items<<"\n"<<"Shop name:"<<order.shop.name<<"\n"<<"Shop id: "<<order.shop.id<<"\n"<<"Quantity: "<<order.shop.qty<<endl;
    }
};

int main()
{
    int ch;
    /*SweetShop s("Shri dairy",101,"Rasmalai",200);
    Swiggy sw(10);
    sw.regShop(s);
    Customer c("Ram",1001,"Dharwad");
    c.placeOrder(sw);
    c.printOrder();*/
    cout<<"SWIGGY"<<endl;
     while(1)
        {
            cout<<"Place an order(0/1)?"<<endl;
            cin>>ch;
        switch(ch)
        {
            case 1:
                try{
                    SweetShop s;
                    s.getSweet();
                    Swiggy sw;
                    sw.getSwi();
                    sw.regShop(s);
                    Customer c;
                    c.getCust();
                    c.placeOrder(sw);
                     cout<<"\n";
                    c.printOrder();
                    }

            catch(SException e)
            {
               cout<<"Error:: order cannot be placed"<<endl;
            }
            case 2:cout<<"Thank You"<<endl;
        }
        }
    return 0;
}
