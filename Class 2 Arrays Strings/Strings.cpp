#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("I study in Kletech");
    string str2="KLE Technological University";
    string str3;

    str3=str2;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    string str4=" Hubballi";
    str3=str1+str4;
    cout<<str3<<endl;

    str1.swap(str2);

    cout<<str1<<endl;


    cout<<"--------------------------------------------"<<endl;
    string str5;
    cout<<"Enter sentence (strings with space)"<<endl;
    getline(cin,str5);
    cout<<"Entered sentence is:"<<endl;
    cout<<str5<<endl;


    cout<<"--------------------------------------------"<<endl;
    string str6;
    cout<<"Reading multi line input:\nEnter multi line ending with '!'"<<endl;
    getline(cin,str6,'!');
    cout<<"Entered multi line input is:"<<endl;
    cout<<str6<<endl;


    cout<<"--------------------------------------------"<<endl;
    cout<<"Searching the first occurance of the letter 'g' in the pattern 'geeksforgeeks'"<<endl;
    string str = "geeksforgeeks a computer science";
    string str7 = "g";

    // Find first occurrence of "geeks"
    size_t found = str.find(str7);
    if (found != string::npos)
     {
        cout<<"Found="<<found<<endl;
        cout << "First occurrence is " << found << endl;
     }
    else
     {
        cout<<"found="<<found<<endl;
        cout<<"Not found"<<endl;
     }
            /*if(found){cout << "First occurrence is " << found << endl;}
            else
            {
            cout<<"Not found"<<endl;
            }*/
    cout<<"--------------------------------------------"<<endl;
    string str8="Test";
    string str9="test";
    cout<<"Checking two strings equal or not"<<endl;
    cout<<(str8==str9)<<endl;  // 0 if both are equal

    cout<<"Length of the string 'Test'"<<endl;
    cout<<str8.length()<<endl; //Length of the string
    int len=str8.length();

    cout<<"--------------------------------------------"<<endl;
    char data[len+1];
    strcpy(data,str8.c_str());
    cout<<data<<endl;

    return 0;
}
