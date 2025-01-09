#include<iostream>
#include<climits>
using namespace std;
int digitsum(int n){
    if(n==0){
        return 0;
    }
    int p=digitsum(n-1);
    return n+p;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int pre=factorial(n-1);
    return n*pre;
}
int root(int n,int power){
    if(power==0){
        return 1;
    }
    int m=root(n,power-1);
    return n*m;
}
int main(){
int n;
cin>>n;
 cout<<digitsum(n)<<endl;
cout<<factorial(n)<<endl;
int power;
cout<<"enter the power of givin value ";
cin>>power;
cout<<root(n,power);
}