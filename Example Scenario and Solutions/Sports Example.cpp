#include <iostream>

using namespace std;

class SportsPerson{
public:
   string name;
   int birthYear;
   string typeOfPlayer;
   int points;

   SportsPerson()
   {
       name="";
       birthYear=0;
       typeOfPlayer="";
       points=0;
   }

   SportsPerson(string s,int b,string t,int p)
   {
       name=s;
       birthYear=b;
       typeOfPlayer=t;
       points=p;
   }

   virtual void participateInEvent(int score)
   {
       points+=1;
   }

   void display()
   {
       cout<<name<<":"<<birthYear<<":"<<typeOfPlayer<<":"<<points<<endl;
   }


};

class Athlete:public SportsPerson{
private:
    int c=0;
public:
    string typeOfAthlete;

    Athlete():SportsPerson()
    {
      typeOfAthlete="";
    }

    Athlete(string s,int b,string t,int p,string ta):SportsPerson(s,b,t,p)
    {
      typeOfAthlete=ta;
    }

    void participateInEvent(int score)
    {
        if(score>=50){
          SportsPerson::participateInEvent(score);
          c+=1;
        }
        if(c>=3)
        {
           SportsPerson::typeOfPlayer="International";
        }
    }

    void display()
    {
        cout<<typeOfAthlete<<endl;
        SportsPerson::display();
    }

    static void print(Athlete *a,int n)
    {
      for(int i=0;i<n;i++)
      {
          cout<<"\n\nInternational Athletes\n"<<a[i].typeOfAthlete<<":";
          a[i].SportsPerson::display();

      }
    }


};

class Swimmer:public SportsPerson{
public:
    string typeOfSwimmer;

    Swimmer():SportsPerson()
    {
        typeOfSwimmer="";
    }


    Swimmer(string s,int b,string t,int p,string ts):SportsPerson(s,b,t,p)
    {
        typeOfSwimmer=ts;
    }

    void participateInEvent(int score)
    {
       if(score>=100){
          SportsPerson::participateInEvent(score);
        }
        if(SportsPerson::points>=5)
        {
            SportsPerson::typeOfPlayer="International";
        }

    }

    void display()
    {
        cout<<typeOfSwimmer<<endl;
        SportsPerson::display();
    }

    static void print(Swimmer *s,int n)
    {
      for(int i=0;i<n;i++)
      {
          cout<<"\n\nInternational Swimmers\n"<<s[i].typeOfSwimmer<<":";
          s[i].SportsPerson::display();

      }
    }

};
/*
int main()
{
    SportsPerson *s;
    Athlete obja("abc",2000,"National",2,"long");
    Swimmer objb("mno",2001,"National",4,"pool");
    obja.display();
    objb.display();
    cout<<"AFTER"<<endl;
    s=&obja;
    s->participateInEvent(60);
    s->participateInEvent(70);
    s->participateInEvent(80);
    s=&objb;
    s->participateInEvent(120);

    obja.display();
    objb.display();

    Athlete obj1("abc",2000,"National",2,"long"),obj2("abc",2000,"National",2,"short"),obj3("abc",2000,"National",2,"short");
    Swimmer obj5("mno",2001,"National",1,"pool"),obj6("mno",2001,"National",1,"Marthon"),obj7("mno",2001,"National",1,"Marthon");

    Athlete arr[]={obj1,obj2,obj3};
    Swimmer arr1[]={obj5,obj6,obj7};



    Athlete::print(arr,3);
    Swimmer::print(arr1,3);



    return 0;
}
*/
