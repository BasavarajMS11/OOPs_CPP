#include <iostream>
#define MAX 50

using namespace std;

class Flight{
public:
   int flightNumber;
   string route;
   int schTakeOff;

   Flight()
   {
       flightNumber=0;
       route="";
       schTakeOff=0;
   }

   Flight(int n,string r,int tf)
   {
       flightNumber=n;
       route=r;
       schTakeOff=tf;
   }

   virtual void fly()
   {
       cout<<"Flight ready for Take Off\n "<<endl;
   }

   void displayFlight()
   {
       cout<<"Flights ready for Take Off\n\n "<<endl;
       cout<<flightNumber<<":"<<route<<":"<<schTakeOff<<endl;
   }
};

class PasFlight:public Flight{
public:
    string mem_pas[MAX];
    int maxPas=100;
    int noPas;
    float ticketFare=1000;

    PasFlight():Flight()
    {
      noPas=0;
    }

    PasFlight(int fn,string rt,int tf):Flight(fn,rt,tf)
    {
        int n;
        cout<<"\nEnter number of passengers:"<<endl;
        cin>>n;
        noPas=n;
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter passenger name:"<<endl;
            cin>>mem_pas[i];
        }

    }
    void fly()
    {
        float sum;

        if(noPas>10)
        {
            Flight::fly();
            cout<<"\nTotal Fare collected:"<<endl;
            sum=noPas*ticketFare;
            cout<<sum<<endl;
        }

    }
    static void takeOff(PasFlight *c,int n)
    {
      for(int i=0;i<n;i++)
      {   cout<<"\n\nPasFlight\n"<<endl;
          c[i].Flight::displayFlight();
      }
    }


};

class CargoFlight:public Flight{
public:
    float parWgt[MAX];
    float maxWgt=1000;
    float totalWgt;
    float chargePerKg=400;

    CargoFlight():Flight()
    {
        totalWgt=0;
    }

    CargoFlight(int fn,string rt,int tf):Flight(fn,rt,tf)
    {   int n;
        cout<<"\n\nEnter number of parcels:"<<endl;
        cin>>n;
        float sum=0;
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter parcel weight:"<<endl;
            cin>>parWgt[i];
            sum=sum+parWgt[i];
        }
        totalWgt=sum;
    }

    void fly()
    {
     float amount=0;
     if(totalWgt<maxWgt)
     {
         Flight::fly();
         cout<<"Total Fare collected:"<<endl;
         amount=totalWgt*chargePerKg;
         cout<<amount<<endl;
     }
    }

    static void takeOff(CargoFlight *c,int n)
    {
      for(int i=0;i<n;i++)

      {   cout<<"\n\nCargoFlight\n"<<endl;
          c[i].Flight::displayFlight();
      }
    }

};
/*
int main()
{
    Flight *f;
    PasFlight obja(1,"abc",10);
    CargoFlight objb(1,"def",12);
    f=&obja;
    f->fly();
    f=&objb;
    f->fly();

    PasFlight obj1(1,"abc",10),obj2(2,"ac",11),obj3(3,"bcd",12);
    CargoFlight obj5(1,"def",17),obj6(6,"def",11),obj7(8,"def",12);

    PasFlight arr[]={obj1,obj2,obj3};
    CargoFlight arr1[]={obj5,obj6,obj7};



    PasFlight::takeOff(arr,3);
    CargoFlight::takeOff(arr1,3);



    return 0;
}*/

