#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="akjsdsAAAAAAjzzzfddsaa";
    int count[26];
    for(int i=0;i<26;i++)
    count[i]=0;

    for(int i=0;i<s.size();i++)
    count[s[i]-'a']++;

    char ch='a';
    int maxc=0;
    for(int i=0;i<26;i++)
{
  if(count[i]>maxc){
    maxc=count[i];
    ch=i+'a';
  }
}
cout<<maxc<<" "<<ch<<endl;

}