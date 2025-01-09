#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* searchInBST(node* root,int key){
    if(root ==NULL)
    return NULL;
    if(root->data == key)
    return root;

    if(root->data > key)
    return searchInBST(root->left,key);

   return searchInBST(root->right,key);
}
int main()
{
    node* root=new node(8);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right=new node(9);
    root->right->right=new node(10);
    if(searchInBST(root,9) ==NULL)
    cout<<"not find";
    else
    cout<<"find value";
}