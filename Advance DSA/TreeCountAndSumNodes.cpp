#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int CountAllNodes(node* root){
    if(root == NULL){
        return 0;
    }
    return CountAllNodes(root->left)+ CountAllNodes(root->right) + 1;
}
//calculate sum of all node
int sumOfAllNodes(node* root){
    if(root == NULL){
        return 0;
    }
    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data;
}
int main()
{
    node* root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right->left=new node(6);
  root->right->right=new node(7);
  cout<<CountAllNodes(root);
  cout<<endl;
  cout<<sumOfAllNodes(root);
}