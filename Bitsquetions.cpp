#include<iostream>
using namespace std;
int powerof2(int n){
return (n &&!(n&n-1));
}
int onerepresent(int n){
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    return count;
}
int subsetcombos(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
      for(int j=0;j<n;j++){
        if(i & (1<<j)){
            cout<<arr[j];
        }
      }cout<<"\n";
    }
}
int main()
{
 //cout<<powerof2(1);
 int arr[4]={1,2,3,4};
 subsetcombos(arr,4);
 cout<<"\n";
 cout<<subsetcombos(arr,4);
 return 0;
}