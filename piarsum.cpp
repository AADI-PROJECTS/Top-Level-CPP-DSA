#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int kaden(int arr[],int n){
    int crrsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        crrsum+=arr[i];
        if(crrsum<0){
            crrsum=0;
        }
       maxsum=max(crrsum,maxsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrap;
    int nwrap;
    nwrap=kaden(arr,n);
    int tsum=0;
    for(int i=0;i<n;i++){
        tsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrap=tsum+kaden(arr,n);
    cout<<max(wrap,nwrap)<<endl;
    return 0;
}*/
bool pairsum(int arr[],int n,int k){
    /*for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false ;*/
    //secound methode
    int low=0;
    int high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;                                  
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
        
    }
    return false;
    
}
 int main()
    {
        
        int arr[]={2,4,6,12,54,59};
        int k=10;
        cout<<pairsum(arr,4,k)<<endl;
        return 0;
    }