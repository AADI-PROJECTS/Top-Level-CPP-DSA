#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<math.h>
#include<climits>
using namespace std;
int main()/*{
    int a;
    cin>>a;
    int arr[a];
    for (int  i = 0; i <a; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<"/";
    }
    
}*/
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
       /* if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }*/
    maxno=max(maxno,arr[i]);
    minno=min(minno,arr[i]);
    }
    cout<<maxno<<" "<<minno;
}