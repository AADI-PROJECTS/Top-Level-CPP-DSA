#include<iostream>
#include<stack>
#include<queue>
//in this code the PUSH FUNCTION is complex
using namespace std;
class stac{
    int length;
    queue<int> q1;
    queue<int>q2;
    public:
    stac()
    {
      length=0;
    }
    void push(int x)
    {
        q2.push(x);
        length++;
       
        while(!q1.empty()){
                q2.push(q1.front());//top==front
                q1.pop();
            }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void  pop()
    {
       q1.pop();
      length--;
    }
    int top(){
     return q1.front();
    }
    int size()
    {
        return length;
    }
};
int main()
{
    stac st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<< st.top()<<endl;
    st.pop();
    cout<< st.top()<<endl;
    st.pop();
    cout<< st.top()<<endl;
    st.pop();
    cout<< st.size()<<endl;

}