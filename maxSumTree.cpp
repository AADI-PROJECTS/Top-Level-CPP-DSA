#include<iostream>
#include<limits.h>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
int calculateMaxSum(node* root,int &ans){
    if(root==NULL)
    return 0;
    int left=calculateMaxSum(root->left,ans);
    int right=calculateMaxSum(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(nodeMax,ans);
    int singleMaxSum=max(root->data,max(root->data+left,root->data+right));
    return singleMaxSum;
}
int maxPathSum(node* root){
    int ans;
    calculateMaxSum(root,ans);
    return ans;
}
int main()
{
    //this code give the maximum sun of nodes of all tree
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->right=new node(4);
    root->right->right=new node(2);

    cout<<maxPathSum(root);
}