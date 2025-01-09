#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printNode(node* root,int k){
    if(root==NULL || k<0)
    return;
    if(k==0)
   {
    cout<<root->data<<" ";
    return;
   }
   printNode(root->left,k-1);
   printNode(root->right,k-1);
}
int nodeAtk(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root ==target){
        printNode(root,k);
        return 0;
    }
    int dl=nodeAtk(root->left,target,k);
    if(dl !=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printNode(root->right,k-dl-2);
        }
        return dl+1;
    }
    int dr=nodeAtk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printNode(root->left,k-dr-2);
        }
        return dr+1;
    }
    return -1;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->right=new node(4);
    root->right->right=new node(5);
    nodeAtk(root,root->left,1);
}