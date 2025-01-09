#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int preFixEvaluation(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int opr1=st.top();
            st.pop();
            int opr2=st.top();
            st.pop();

            switch(s[i]){
              case '+':
              st.push(opr1+opr2);
              break;

              case '-':
              st.push(opr1-opr2);
              break;

              case '*':
              st.push(opr1*opr2);
              break;

              case '/':
              st.push(opr1/opr2);
              break;

              case '^':
              st.push(opr1^opr2);
              break;

              case '%':
              st.push(opr1%opr2);
              break;

              default:
              cout<<"stack can not understant formate";
              break;
            }
        }
    }
    return st.top();
}
int main()
{
    cout<<preFixEvaluation("-+7*45+20");
}