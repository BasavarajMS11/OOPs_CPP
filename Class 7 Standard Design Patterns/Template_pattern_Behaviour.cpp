//Demo5: Template Pattern(Behaviour Pattern)

#include<iostream>
using namespace std;
//abstract class
class Game{
public:
   virtual void initialize()=0;
   virtual void startPlay()=0;
    virtual void endPlay()=0;
    //ordering function call:template
    void play(){
    initialize();
    startPlay();
    endPlay();
    }

};
class Cricket: public Game{
public:
    void endPlay(){
    cout<<"Cricket game finished"<<endl;
    }
    void initialize(){
    cout<<"Cricket game initialized"<<endl;
    }
    void startPlay(){
    cout<<"Cricket game started, enjoy the game"<<endl;
    }
};
class FootBall: public Game{
public:
    //observe the order of method definitions
    void endPlay(){
    cout<<"Footbal game Finished!!"<<endl;
    }
    void initialize(){
    cout<<"Footbal game initialized"<<endl;
    }
    void startPlay(){
    cout<<"Footbal game started, enjoy the game"<<endl;
    }

};
//client

/*
int main(){
    Game* game=new Cricket();
    game->play();
    game=new FootBall();
    game->play();
return 0;
}*/

