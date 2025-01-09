#include<iostream>
#include<math.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
    int result=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        result+=x*y;
        x*=2;
        n/=10;
    }
    return result;
}
int octaltodecimal(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int hexadecimaltodecimal(string n)
{
    int result=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if (n[i]>='0' && n[i]<='9'){
            result+= x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            result+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return result;
}
int decimaltobinary(int n)
{
    int result=0;
    int x=1;
    while(x<=n)
    x*=2;
    x/=2;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        result=result*10+lastdigit;
    }
    return result;
}
int decimaltooctal(int n){
    int ans=0;
    int x=1;
    while(x<=n)
    x*=8;
    x/=8;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        
        x/=8;
        ans=ans*10+lastdigit;
    }
    return ans;
}
string decimaltohexadecimal(int n)
{
    string ans="";
    int x=1;
    while(x<=n)
    x*=16;
    x/=16;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit <=9)
        ans=ans+ to_string(lastdigit);
        else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
 return ans;
}
int main()
{
    int n;
    cin>>n;
    //cout<<binarytodecimal(n)<<endl;
   //cout<<octaltodecimal(n);
   //cout<<hexadecimaltodecimal(n);
   //cout<<decimaltobinary(n);
   //cout<<decimaltooctal(n);
   cout<<decimaltohexadecimal(n);
}