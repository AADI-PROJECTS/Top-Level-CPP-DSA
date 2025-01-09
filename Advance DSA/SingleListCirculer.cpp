#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
void inserthead(node* &head,int value){
    node* n=new node(value);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insert(node* &head,int value){
    node* n=new node(value);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deletehead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* tohead=head;
    temp->next=head->next;
    head=head->next;
    delete tohead;
}
void deleteEnd(node* &head,int pos){
    if(pos==1){
        deletehead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL";
}
int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    cout<<endl;
    inserthead(head,9);
    inserthead(head,8);
    display(head);
    deleteEnd(head,5);
    cout<<endl;
    display(head);
    deletehead(head);
    cout<<endl;
    display(head);
    

}