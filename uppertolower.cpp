#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string st="akjshdjadsjkn";
    sort(st.begin(),st.end());
    for(int i=0;i<st.size();i++)
    st[i]-=32;
    cout<<st<<endl;
  transform(st.begin(),st.end(),st.begin(),::toupper);
  cout<<st<<endl;
  //to lower case with diffrent format
string s="AKJHD AKJSF";
for(int i=0;i<s.size();i++){
     if(s[i]>='A'&& s[i]<='Z')
    s[i]+=32;
}
cout<<s<<endl;
transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s;

//rever string function or find the largest number
string num="7065632429";
sort(num.begin(),num.end(),greater<int>());
cout<<num;
}