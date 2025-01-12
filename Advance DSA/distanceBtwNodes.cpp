#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
//LCA lowest comman ancestor
node* LCA(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data==n2){
        return root;
    }
    node* left=LCA(root->left,n1,n2);
   node* right=LCA(root->right,n1,n2);
   if(root->left !=NULL && root->right !=NULL){
    return root;
   }
   if(root->left ==NULL && root->right ==NULL){
    return NULL;
   }
   if(left !=NULL){
    return LCA(root->left,n1,n2);
   }
   return LCA(root->right,n1,n2);
}
int findDist(node* root,int k,int dist){
    if(root == NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left=findDist(root->left,k,dist+1);
    if(left !=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);
}
int disBtwNode(node* root,int n1,int n2){
    node* lca=LCA(root,n1,n2);
    int distance1=findDist(root,n1,0);
    int distance2=findDist(root,n2,0);
    
    return distance1+distance2;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->right=new node(3);
    root->right->right=new node(5);
    cout<<disBtwNode(root,4,5);
}