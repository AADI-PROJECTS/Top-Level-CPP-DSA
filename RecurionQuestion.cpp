#include<iostream>
using namespace std;
int tills(int n){
    if(n==0 || n==1){
        return n;
    }
    return tills(n-1)+tills(n-2);
}
int friendpair(int n){
    if(n==0 || n==1 ||n==2){
        return n;
    }
    return friendpair(n-1)+friendpair(n-2)*(n-1);
}
int knapsack(int arr[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
       return knapsack(arr,wt,n-1,w);
    }
    return max(knapsack(arr,wt,n-1,w-wt[n-1])+arr[n-1],knapsack(arr,wt,n-1,w));
}
int main(){
    cout<<tills(4)<<endl;
    cout<<friendpair(4)<<endl;
    int wt[]={20,300,20};
    int arr[]={100,50,20};
    int w=50;
    cout<<knapsack(arr,wt,3,w);
}