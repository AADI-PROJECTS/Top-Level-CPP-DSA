#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node* prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
void startlist(node* &head,int value){
    node* n=new node(value);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void endlist(node* &head,int value){
    if(head==NULL){
        startlist(head, value);
        return;
    }
    node* n=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void firstd(node* &head){
      node* n=head;
      head=head->next;
      head->prev=NULL;
      delete n;
}
void delet(node* &head,int value){
   
    if(value==1){
    firstd(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=value){
        temp=temp->next;
       count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp;
    
}
int main()
{
    node* head=NULL;
    endlist(head,1);
    endlist(head,2);
    endlist(head,3);
    endlist(head,4);
    display(head);
    startlist(head,5);
    display(head);
 cout<<endl;
    delet(head,5);
    display(head);
}