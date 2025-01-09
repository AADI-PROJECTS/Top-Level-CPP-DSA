#include<iostream>
using namespace std;
//this sorting technique work on only three type of number like 0,1,2
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfs(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;mid++;
        }
        else if(arr[mid]==1){
              swap(arr,mid,high);
              mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
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
 // int arr[]={1,1,1,0,0,2,0,1,0};
    dnfs(arr,9);
    for(int i=0;i<9;i++)
    cout<<arr[i]<<" ";
}