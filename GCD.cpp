#include<iostream>
using namespace std;
int remender(int a,int b)
{
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
        cout<<a<<" "<<b<<endl;

    }

    return a;
}
int div(int n,int a,int b){
    int x=n/a;
    int y=n/b;
    int z=n/(a*b);
    return x+y-z;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<remender(a,b);

// int a,b,n;
// cin>>a>>b>>n;
// cout<<div(n,a,b);
// return 0;
}