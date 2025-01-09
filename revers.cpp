#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
int revers=0;
while (n>0)
{
    int lastdigit=n%10;
    revers = revers*10 + lastdigit;
    n=n/10;
}
cout<<revers<<endl;

}