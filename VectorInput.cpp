#include<iostream>
#include<vector>
using namespace std;
//input arrays using vector
int main()
{
    int n;cin>>n;
    vector<int>vec;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        vec.push_back(input);
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
  //input the without defind the size or not knowing the size
  vector<int>v;
  int in;
  cout<<endl;
  cout<<"enter the array (enter the non-integer value for exit)";
  while(cin>>in){
    v.push_back(in);
  } 
//need to print this type of for loop
for(auto result:v){
    cout<<result<<" ";
}

}