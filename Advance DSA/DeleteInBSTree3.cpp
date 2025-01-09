#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* inOrderCheck(node* root){
    node* curr=root;
    while(curr && curr->left!=NULL)
    curr=curr->left;

    return curr;
}
node* deleteNodeBST(node* root,int key)
{
    if(key < root->data){
        root->left=deleteNodeBST(root->left,key);
    }
   else if(key > root->data){
        root->right=deleteNodeBST(root->right,key);
    }
    else{
        if(root->left==NULL){
         node* temp=root->right;
         free(root);
         return temp;
        }
        else if(root->right==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        node* temp=inOrderCheck(root->right);
        root->data=temp->data;
        root->right=deleteNodeBST(root->right,temp->data);
    }
    return root;
}
void inOrder(node* root){
    if(root==NULL)
    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
     node* root=new node(8);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right=new node(9);
    root->right->right=new node(10);
    inOrder(root);
    deleteNodeBST(root,8);
    cout<<endl;
    inOrder(root);
    return 0;
}