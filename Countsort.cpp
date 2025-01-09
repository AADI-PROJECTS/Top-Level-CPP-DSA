#include<iostream>
#include<algorithm>
using namespace std;
void counts(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
   
    int count[10]={0};
   
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
   int result[n];
    for(int i=n-1;i>=0;i--){
        result[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=result[i];
    }
}
int main()
{
    int n;
    cin>>n;
    

   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   
 counts(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}