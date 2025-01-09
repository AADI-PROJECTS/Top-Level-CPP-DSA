#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//it is for compare words in revers oder
int main(){
    int m;
    cin>>m;
    char a[m+1];
    cin>>a;
    bool check=true;
    for(int i=0;i<m;i++){
        if(a[i]!=a[m-1-i]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"it is a palindrom"<<endl;
    }
    else{
        cout<<"it not a palindrom"<<endl;
    }
}