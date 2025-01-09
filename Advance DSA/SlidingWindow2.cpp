#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find larger element in k value gas
int main()
{
    int n,k;cin>>n>>k;
    vector<int>vec(n);
    for(auto &i:vec){
        cin>>i;
    }
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!dq.empty() && vec[dq.back()]<vec[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(vec[dq.front()]);
    for(int i=k;i<n;i++){
        if(dq.front()==i-k){
            dq.pop_front();
        }
        while(!dq.empty() && vec[dq.back()]<vec[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(vec[dq.front()]);
    }
    for(auto i:ans)
    cout<<i<<" ";
}