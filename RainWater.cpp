#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rain_water(vector<int>vec){
    stack<int>st;
    int n=vec.size();
    int ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && vec[st.top()]<vec[i]){
            int curr=st.top();
            st.pop();

            if(st.empty()){
                break;
            }
            int diff=i-st.top()-1;
            ans+=(min(vec[st.top()],vec[i])-vec[curr])*diff;
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    //check number value for understand low to high
    vector<int>vec={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(vec);
}