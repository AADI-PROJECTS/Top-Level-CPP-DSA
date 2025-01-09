#include<iostream>
using namespace std;
void sort(int arr[],int l,int midpoint,int r){
    //using itrater and value we sort the the array
    int a1=midpoint-l+1;
    int a2=r-midpoint;
    int ar1[a1];
    int ar2[a2];
    //asign the value of array
    for(int i=0;i<a1;i++){
        ar1[i]=arr[l+i];
    }
    for(int i=0;i<a2;i++){
        ar2[i]=arr[midpoint+1+i];
    }
    //then we are sort the array and put the values
    int i=0,j=0,k=l;
    while(i<a1 && j<a2){
        if(ar1[i]<ar2[j]){
            arr[k]=ar1[i];
            k++;i++;
        }
        else{
            arr[k]=ar2[j];
            k++;j++;
        }
    }
    while(i<a1){
        arr[k]=ar1[i];
       k++;i++;
    }
    while(j<a2){
        arr[k]=ar2[j];
        k++;j++;
    }
}

void merge(int arr[],int l,int r){
    if(l<r){
        int midpoint=(l+r)/2;
        //using recurtion we are meger the array
        merge(arr,l,midpoint);
        merge(arr,midpoint+1,r);
        sort(arr,l,midpoint,r);
    }
}
int main(){
int n;
cout<<"enter the size of Array";
cin>>n;
int arr[n];
cout<<"enter the value of Array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
merge(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
