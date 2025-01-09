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
int Height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(Height(root->left),Height(root->right))+1;
}
bool HeightBalance(node* root){
    if(root == NULL){
        return true;
    }
    if(HeightBalance(root->left)==false)
    return false;

    if(HeightBalance(root->right)==false)
    return false;

    int lh=Height(root->left);
    int rh=Height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
bool HeightBalance2(node* root,int* height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(HeightBalance2(root->left,&lh)==false)
    return false;
    if(HeightBalance2(root->right,&rh)==false)
    return false;
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
     node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);    
  root->right->left = new node(6);
  root->right->right = new node(7);
  if (HeightBalance(root))
  {
    cout << "Balance tree";
  }
  else
  {
    cout << "not balance";
  }
cout << endl;
  node* root2 = new node(1);
  root2->left = new node(2);
  root2->left->left = new node(3);
  int height=0;
  if (HeightBalance2(root2,&height))
  {
    cout << "Balance tree";
  }
  else
  {
    cout << "not balance";
  }
}