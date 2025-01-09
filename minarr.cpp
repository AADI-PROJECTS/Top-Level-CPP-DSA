#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
//finding sum of s in array
/*{
int n,s;
cin  >> n>>s;
int arr[n];
for(int i=0;i<n;i++){
    cin  >>arr[i];
 }
 int i=0,j=0,st=-1,en=-1,sum=0;
 while(j<n && sum+arr[j]<=s){
    sum+=arr[j];
    j++;
 }
 if(sum==s){
    cout<<i+1<<" "<<j;
    return 0;
 }
 while(j<n){
    sum+=arr[j];
    while(sum>s){
        sum-=arr[i];
        i++;
    }
    if(sum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
 }
 cout<<st<<" "<<en<<endl;
 return 0;
}*/

//find the smallest positive number in array
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    const int s=1e6+2;
    bool check[s];
    for(int i=0;i<s;i++){
      check[i]=false;
    }
    for(int i=0;i<n;i++){
      if(a[i]>=0){
         check[a[i]]=1;
      }
    }
    int ans=-1;
    for(int i=1;i<s;i++){
      if(check[i]==false){
         ans=i;
         break;
      }
    }
    cout<<ans<<endl;
    return 0;
}