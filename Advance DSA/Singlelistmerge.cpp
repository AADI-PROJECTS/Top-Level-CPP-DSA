#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
void insertAtTail(node* &head,int value){
    node* n=new node(value);
 if(head==NULL){
   head=n;
   return;
 }   
 node* temp=head;
 while(temp->next!=NULL){
    temp=temp->next;
 }
 temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node* normal(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;
    
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}
node* mergerec(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
   
        if(head1->data<head2->data){
            result=head1;
            result->next=mergerec(head1->next,head2);
        }
        else{
            result=head2;
            result->next=mergerec(head1,head2->next);
        }
   
    return result;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    for(int i=1;i<=7;i+=2){
        insertAtTail(head1,i);
    }
    insertAtTail(head2,2);
    insertAtTail(head2,4);
    insertAtTail(head2,6);
   display(head1);
   display(head2);
   cout<<endl;
//    node* newhead=normal(head1,head2);
//    display(newhead);
node* recursive=mergerec(head1,head2);
display(recursive);
}