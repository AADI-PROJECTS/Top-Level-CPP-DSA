#include<iostream>
#include<climits>
#include<math.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()/*{
    int mx=INT_MIN,n;  
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    return 0;
}*/
{
    int n;
    cin  >>n;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    if(n==1){
        cout<<"1";
        return 0;
    }
    int ans =0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx&&arr[i]>arr[i+1]){
            ans++;

        }
        mx=max(mx,arr[i]);
    }
    cout<<ans<<endl;

}