#include<iostream>
using namespace std;
#define n 100
class stack{
    private:
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
         top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is full";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element in stack";
            return;
        }
        top--;
    }
    int tt(){
        if(top==-1){
            cout<<"top on 0 index";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.tt()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.tt()<<endl;
    cout<<st.empty()<<endl;
}