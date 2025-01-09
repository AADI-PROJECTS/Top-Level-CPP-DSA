#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"if you want to start interview say Yes or N=";
    
    cin>>ch;
    
    
    switch (ch)
    {
    case 'y':
        cout<<"I'm alex from HR Department"<<endl;
        cout<<"Tell me about your self"<<endl;
        break;
    case 'n':
       cout<<"Okey take a break";
               break;
             
    
    default:
     cout<<"sorry you are not selectede for interview try next time"<<endl;
        break;
    }
    
   
    
     int salary;
     cout<<"how much salary did you aspect=";
     cin>>salary;   
 

    if(salary<=20000){
        cout<<"okey you can join tommorow"<<endl;
        cout<<"cary your all documents";
     }
     else if(salary>35000){
        cout<<"what is your qualification"<<endl;
        cout<<"visit company";
     }
    else{
        cout<<"visit  company";
    }
 }

