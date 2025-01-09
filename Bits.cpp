#include<iostream>
using namespace std;
// int main()
// {
    //this is my logic of code!
//     int n,pos,value;
//     cout<<"enter the number ";
//     cin>>n;
//     cout<<"enter the possition value";
//     cin>>pos;
//   if(pos>4){
//     cout<<"its not a right value";
//     return 0;
//   }
//   cin>>value;
//int ans=((n&(1<<pos))!=0);
// int ans=(n|(1<<pos));
// int ans=~(1<<pos),result;
// result=(n&ans);
// cout<<result;
// int update=~(1<<pos);
// n=n&update;
// int ans=(n|(value<<pos));
// cout<<ans;

// }
int getbit(int n,int poss){
        return ((n&(1<<poss))!=0);
    }
 int setbit(int n,int pos){
    return (n|(1<<pos));
 }
 int clearbit(int n,int pos){
    int value=~(1<<pos);
    return (n&(value));
 }
 int updatebit(int n,int pos,int value){
    int ans=~(1<<pos);
    n=n&ans;
    return (n|(value<<pos));
 }
int main()
{
    //cout<<getbit(7,2)<<endl;
    cout<<setbit(5,3);
    // cout<<clearbit(5,2)<<endl;
   //  cout<<updatebit(5,1,1)<<endl;
}