#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* constructBST(int preorder[],int* preorderIdx,int key,int min,int max,int n){
    if(*preorderIdx >=n){
        return NULL;
    }
    node* root=NULL;
    if(key >min && key <max){
      root=new node(key);
      *preorderIdx+=1;
      if(*preorderIdx <n ){
        root->left=constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
      }
      if(*preorderIdx <n){
        root->right=constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
      }
    }
    return root;
}
void order(node* root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    order(root->left);
    order(root->right);
}
int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderIdx=0;
   node* ans=constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
   order(ans);
    return 0;
}