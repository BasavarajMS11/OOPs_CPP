/*
EventManagement:
Consider TEDXEvent an event management system which takes care of managing of different type of events. The events shall be registered with TEDXEvent (create some events). The following objects identified for event management system. Write a C++ program to model event management system with list of functions defined.

TEDXEvent{title, Event*, eventCharges}, Event{eventID, eventTitle(expertSpeech/danceEvent/annualDay), eventCharge, eventPlace}
 
void/double computeTotalEventCharges();
void printMaxChargeEvent();
void printTEDX()  // print event company details along with events conducted 

*/
#include <iostream>

using namespace std;

class Event{
private:
    int eventId;
    string title;

    string eventPlace;
public:
    double eventCharge;
    Event()
    {
        eventId=0;
        title="";
        eventCharge=0;
        eventPlace="";
    }
    Event(int id,string t,double ec,string p)
    {
        eventId=id;
        title=t;
        eventCharge=ec;
        eventPlace=p;
    }
    void printEvent()
    {
        cout<<eventId<<":"<<title<<":"<<eventCharge<<":"<<eventPlace<<":"<<endl;

    }

};

class TEDXEvent{
private:
    string title;

    double eventCharges;

public:
    Event* events;
    TEDXEvent()
    {
        title="";
    }
    TEDXEvent(string t)
    {
        title=t;


    }
    void computeTotalEventCharges(Event events[])
    {
        double sum=0;
        for(int i=0;i<4;i++)
        {
            sum=sum+events[i].eventCharge;
        }
        cout<<"computed Total Event Charges :"<<sum<<endl;
        eventCharges=sum;
    }
    void printMaxChargeEvent(Event events[])
    {
        double MAX=events[0].eventCharge;
        for(int i=1;i<4;i++)
        {
            if(events[i].eventCharge>MAX)
            {
                MAX=events[i].eventCharge;
            }

        }
        cout<<"Maximum Charge Event:"<<MAX<<endl;

    }
    void printTEDXEvent()
    {
        cout<<title<<":"<<endl;
        for(int i=0;i<4;i++)
        {
            events[i].printEvent();
        }
        cout<<eventCharges<<endl;
    }




};

int main()
{   Event event[4];
    Event e1(1,"expertSpeech",1000,"Hubli"),e2(2,"danceEvent",2000,"Dharwad"),e3(3,"annualDay",3000,"Bangalore"),e4(4,"danceEvent",2000,"Garag");
    TEDXEvent td("CULTURAL");

    Event *ev;
    ev=event;
    event[0]=e1;
    event[1]=e2;
    event[2]=e3;
    event[3]=e4;
    //e1.printEvent();


    /*td.events[0]=new Event(1,"expertSpeech",1000,"Hubli");
    td.events[1]=new Event(2,"danceEvent",2000,"Dharwad");
    td.events[2]=new Event(3,"annualDay",3000,"Bangalore");
    td.events[3]=new Event(4,"danceEvent",2000,"Garag");*/
    td.computeTotalEventCharges(event);
    td.printMaxChargeEvent(event);



    return 0;
}
