#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=0;i<n;i++){
        cout<<t1<<"\n";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
       
    }return;
 }
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}

 