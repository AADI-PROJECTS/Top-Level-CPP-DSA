#include<iostream>
#include<stack>
using namespace std;
void reverStackString(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string words="";

        while(s[i]!=' ' && i<s.length()){
            words+=s[i];
            i++;
        }
        st.push(words);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s="hey my name is aadil";
    reverStackString(s);
  return 0;
}