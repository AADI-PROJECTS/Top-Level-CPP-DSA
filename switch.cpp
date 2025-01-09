#include<iostream>
using namespace std;
int main()
{
    char buttion;
    cout<<"enter the character=";
    cin>>buttion;
    switch (buttion)
    {
     case 'a':
        cout<<"hello";
        break;
     case 'b':
     cout<<"aadil";
     break;
     case 'c':
     cout<<"teli";
     break;
     case 'd':
     cout<<"mailk";
     break;
     case 'e':
     cout<<"shab";
     break;
    default:
    cout<<"enter the right character";
        break;
    }
    cout<<"\nthank you";
    return 0;
    
}