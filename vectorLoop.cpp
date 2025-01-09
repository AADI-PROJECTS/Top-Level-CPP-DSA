#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.empty();
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        cout<<endl;
    }
    //auto is used for autometicly defind the type like int,String etc;
   for(auto element:vec){
    cout<<element;
   }
   cout<<endl;
   vector<int>:: iterator it;
   for(it=vec.begin();it<vec.end();it++){
    cout<<*it<<endl;
   }
   vector<int>p;
  for(int i=1;i<=5;i++){
    p.push_back(i);
  }
  for(auto ele:p){
    cout<<ele;
  }
  //its used for delete the end element
  p.pop_back();
 
  cout<<endl;
  for(auto ele:p){
    cout<<ele<<endl;
  }
  //here the array are swap the value
  swap(vec,p);
  for(auto value:vec)
  cout<<value;
}
