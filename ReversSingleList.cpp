#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
void insert(node* &head,int value){
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
void display(node* head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node* revers(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* prepointer=NULL;
    node* currpointer=head;
    node* nextpointer;
    while(currpointer!=NULL){
        nextpointer=currpointer->next;
        currpointer->next=prepointer;
        prepointer=currpointer;
        currpointer=nextpointer;
    }
    return prepointer;
}
node* revrecurtion(node* &head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    node* itretor=revrecurtion(head->next);
    head->next->next=head;
     head->next=NULL;
     return itretor;
}
node* reversofk(node* &head,int k){
    node* pre=NULL;
    node* current=head;
    node* nextpoint;
    int count=0;
    while(current!=NULL &&  count<k){
        nextpoint=current->next;
        current->next=pre;
        pre=current;
        current=nextpoint;
        count++;
    }
    if(nextpoint!=NULL){
        head->next=reversofk(nextpoint,k);
    }
    return pre;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    // node* result=revers(head);
    // display(result);
    
    // node* ans=revrecurtion(head);
    // display(ans);
    
    int k=2;
    node* kvalue=reversofk(head,k);
    display(kvalue);
}