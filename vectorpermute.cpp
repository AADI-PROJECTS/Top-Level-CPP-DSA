#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void help(vector<int> per,vector<vector<int>>&ans,int pos){
  if(pos==per.size()){
   ans.push_back(per);
   return ;
  }
  for(int i=pos;i<per.size();i++){
    if(i!=pos && per[i]==per[pos]){
      continue;
    }
    swap(per[i],per[pos]);
    help(per,ans,pos+1);
  }
}
vector<vector<int>> permute(vector<int>num){
  sort(num.begin(),num.end());
   vector<vector<int>>ans;
   help(num,ans,0);
   return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int>per(n);
  for(auto & i:per)
  cin>>i;
  vector<vector<int>> res=permute(per);
  for(auto v: res){
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
  }
}