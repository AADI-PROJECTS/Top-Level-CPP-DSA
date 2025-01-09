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
int calculateHeight(node* root){
    if(root ==NULL){
        return 0;
    }
    return max(calculateHeight(root->left),calculateHeight(root->right))+1;
}
int CalcDiameter(node* root){
    if(root ==NULL){
        return 0;
    }
    int lHeight=calculateHeight(root->left);
    int rHeight=calculateHeight(root->right);
    int curr=lHeight+rHeight+1;
    
    int ldiameter=CalcDiameter(root->left);
    int rDiameter=CalcDiameter(root->right);
    return max(curr,max(ldiameter,rDiameter));
}
int CalcDiameter2(node* root,int* height){
    if(root == NULL){
        *height=0;
        return 0;
    }
    int lH=0,rH=0;
    int lDia=CalcDiameter2(root->left,&lH);
    int rDia=CalcDiameter2(root->right,&rH);
    
    int curr=lH+rH+1;
    *height=max(lH,rH)+1;
    return max(curr,max(lDia,rDia));
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
  cout<<CalcDiameter(root);
  cout<<endl;
  int height=0;
  cout<<CalcDiameter2(root,&height);
}