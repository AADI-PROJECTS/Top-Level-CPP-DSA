#include<iostream>
using namespace std;
#define n 20
class queue{
    private:
    int* arr;
    int first;
    int last;
    public:
    queue()
    {
     arr=new int[n];
     first=-1;
     last=-1;
    }
    void push(int x)
    {
        if(last==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        last++;
        arr[last]=x;
        if(first==-1){
            first++;
        }
    }
    void pop(){
        if(first==-1 || first>last){
            cout<<"queue is empty";
            return;
        }
        first++;
    }
    int peek(){
        if(first==-1 || first>last){
            cout<<"queue is empty";
            return -1;
        }
        return arr[first];
    }
    bool empty(){
        if(first==-1 || first>last){
            cout<<"queue is empty";
            return true;
        }
        return false;
    }
};
int main()

{ queue p;

    p.push(1);
    p.push(2);
    cout<<p.peek()<<endl;
    p.pop();
    cout<<p.peek()<<endl;
}