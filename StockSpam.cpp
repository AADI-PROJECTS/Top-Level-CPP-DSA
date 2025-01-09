#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//it is calculate stock price where the stock price is high
vector<int>StockSpam(vector<int>vec){
    vector<int>ans;
    stack<pair<int,int>>st;
    for(auto price:vec){
        int days=1;
        while(!st.empty() && st.top().first<=price){
            days+=st.top().second;
            st.pop();
        }
        st.push({price,days});
        ans.push_back(days);
    }
    return ans;
}
int main()
{
    vector<int> v={100,80,60,70,60,75,85};
    vector<int> result=StockSpam(v);
    for(auto i:result)
    cout<<i<<" ";
}