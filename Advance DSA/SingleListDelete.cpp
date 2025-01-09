#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void insert(node* &head,int value){
    node* n=new node(value);
    n->next=head;
    head=n;
}
void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void remove(node* &head,int value){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        node* n=head;
        head=head->next;
        delete n;
        return;
    }
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* iterator=temp->next;
    temp->next=temp->next->next;
    delete iterator;
}
void removefirst(node* &head){
    node* n=head;
    head=head->next;
    delete n;
}
int main(){
    node* head=NULL;
    insert(head,0);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,1);
    display(head);
    remove(head,1);
    display(head);
    // removefirst(head);
    // cout<<endl;
    // display(head);
}