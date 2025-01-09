#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int sort(int arr[],int l,int r){
    int pivote=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
     if(arr[j]<pivote){
        i++;
        swap(arr,i,j);
     }
    }
    swap(arr,i+1,r);
    return i+1;
}
void recurve(int arr[],int l,int r){
    if(l<r){
        int p=sort(arr,l,r);
        recurve(arr,l,p-1);
        recurve(arr,p+1,r);
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
   recurve(arr,0,n-1);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}