#include<iostream>
using namespace std;
// this is a first form of polymorephism
//function overloading
//calling to integers 
int add(int a,int b){
    return a+b;
}
//need function with the same name like add
int add(int a,int b,int c){
    return a+b+c;  
}
int main(){
    int sum=add(6,9,5);
    int total=add(4,8);
    cout<<"sum of two intergers"<<sum<<endl;
    cout<<"sum of three intergers"<<total;
    return 0;
}