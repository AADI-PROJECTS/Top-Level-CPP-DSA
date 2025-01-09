#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the number";
    cin>>n;
    int i;
    for( i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            cout<<"it's prime "<<endl;
        }
        else{
            cout<<"it's not prime "<<endl;
        } 
}