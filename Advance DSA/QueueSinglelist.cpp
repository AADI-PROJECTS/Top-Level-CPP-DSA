#include<iostream>
using namespace std;
//SINGLELINKED LIST USING QUEUE
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class que{
    private:
    node* front;
    node* back;
    public:
    que()
    {
        front=NULL;
        back=NULL;
    }
    void push(int value)
    {
        node* n=new node(value);
        if(front==NULL)
        {
            front=n;
            back=n;
        }
        back->next=n;
        back=n;
    }
    void pop()
    {
        if(front==NULL)
        {
            cout<<"queue is underflow";
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL)
        {
            cout<<"queue is underflow";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if(front==NULL)
        {
            cout<<"queue is underflow";
            return true;
        }
        return false;
    }
};
int main()
{
    que q;
    for(int i=1;i<=5;i++)
    {
        q.push(i);
    }
    for(int j=1;j<=4;j++){
        q.pop();
    }
    cout<<q.peek()<<endl;
}