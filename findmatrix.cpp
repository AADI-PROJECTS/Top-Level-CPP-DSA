#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//this code work on shorte matrix exampal (if question says you have shoted matrix)
int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    int r=0,c=m-1;
    bool fn=false;
    while(r<n and c>=0){
        if(a[r][c]==target){
            fn=true;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(fn){
        cout<<"element is found";
    }
    else{
        cout<<"the value is not execcest";
    }
}
