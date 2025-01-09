#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    vector<int> vec(n);
    for(auto &i: vec){
        cin>>i;
    }
    multiset<int ,greater<int>>s;
    vector<int>ans;
    for(int i=0;i<k;i++){
        s.insert(vec[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(vec[i-k]));
        s.insert(vec[i]);
        ans.push_back(*s.begin());
    }
    for(auto i: ans){
        cout<<i<<" ";
    }
}