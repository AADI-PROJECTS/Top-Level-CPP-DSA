#include<iostream>
using namespace std;
//this is a simpal methode for count the inversion
// int main()
// {
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int inversion=0;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i]>arr[j]){
//             inversion++;
//         }
//     }
//   }
//   cout<<inversion;
// }
int count(int arr[],int l,int mid,int r){
    int inv=0;
   int n1=mid-l+1;
   int n2=r-mid;
   int ar1[n1];
   int ar2[n2];
   for(int i=0;i<n1;i++){
    ar1[i]=arr[mid+i];
   }
   for(int i=0;i<n2;i++){
    ar2[i]=arr[mid-1+i];
   }
   int i=0,j=0,k=l;
   while(i<n1 && j<n2){
    if(ar1[i]<ar2[j]){
        arr[k]=ar1[i];
        k++;i++;
    }
    else{
        arr[k]=ar2[j];
        inv+=n1-i;
        k++;j++;
    }
   }
   while(i<n1){
    arr[k]=ar1[i];
    k++;i++;
   }
   while(j<n2){
    arr[k]=ar2[j];
    k++;j++;
   }
   return inv;
}
int inversion(int arr[],int l,int r){
    int inv=0;
    if(l<r){
       
        int mid=(l+r)/2;
        inv+=inversion(arr,l,mid);
        inv+=inversion(arr,mid+1,r);
        inv+=count(arr,l,mid,r);
    }
    return inv;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<inversion(arr,0,n-1);

}
