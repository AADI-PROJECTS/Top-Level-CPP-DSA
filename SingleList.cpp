#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
//here we called class like recurtion
    node(int value){
        data=value;
        next=NULL;
    }
};
//this function is set value start point
void insertatstart(node* &head,int value){
node* n=new node(value);
n->next=head;
head=n;
}
void insertatend(node* &head,int value){
    node* n=new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    //itrater for traver the list
    node* temp=head;
    //this loop for point the last value 
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //after find the last value add new value
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
bool find(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"\nans";
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
node* head=NULL;
insertatend(head,1);
insertatend(head,2);
insertatend(head,3);
display(head);
insertatstart(head,5);
cout<<endl;
display(head);
cout<<find(head,3);
}