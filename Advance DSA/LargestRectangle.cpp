#include<bits/stdc++.h>
using namespace std;
int maxvalue(vector<int>arr){
  int n=arr.size();int ans=0,i=0;
  stack<int>st;
  while(i<n){
    while(!st.empty() && arr[st.top()]>arr[i]){
        int t=st.top();
        int height=arr[t];
        st.pop();
        if(st.empty()){
            ans=max(ans,height*i);
        }
        else {
            int len=i-st.top()-1;
            ans=max(ans,height*len);
        }
    }
    st.push(i);
    i++;
  }
  return ans;
}
int main()
{
    // vector<int> arr={2,1,5,6,2,3};
    vector<int>arr={1,2,3,4,5};

    cout<<maxvalue(arr);
}