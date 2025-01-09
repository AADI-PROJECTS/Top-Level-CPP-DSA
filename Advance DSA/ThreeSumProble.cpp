#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int target;cin>>target;
    vector<int>arr(n);
    for(auto &i:arr)
    cin>>i;

    sort(arr.begin(),arr.end());
    bool result=false;
    for(int i=0;i<n;i++){
        int l=i+1,h=n-1;
        while(l<h){
            int curr=arr[i]+arr[l]+arr[h];
            if(curr == target){
                result=true;
            }
            if(curr < target){
                l++;
            }
            else{
                h--;
            }
        }
    }
    if(result){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
// example
// 5 2
// 1 0 1 42 2