#include<iostream>
#include<stack>
#include<queue>
//secound way to solve where POP FUNCTION are complex
using namespace std;
class stacks{
    int length;
    queue<int> q1;
    queue<int> q2;
    public:
    stacks()
    {
        length=0;
    }
    void push(int x)
    {
        q1.push(x);
        length++;
    }
    void pop()
    {
        if(q1.empty()){
            return;
        }
    
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        length--;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    int top()
    {
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return ans;
    }
    int size()
    {
        return length;
    }
};
int main()
{
    stacks s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
}