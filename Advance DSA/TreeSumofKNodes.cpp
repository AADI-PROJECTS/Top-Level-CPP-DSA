#include<iostream>
#include<queue>
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
int sumOfK(node* root,int k){
  if(root == NULL){
    return -1;
  }
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  int level=0;
  int sum=0;
 while(!q.empty()){
  node* temp=q.front();
  q.pop();
  if(temp !=NULL){
    if(level ==k){
      sum+=temp->data;
    }
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
  }
  else if(!q.empty()){
    q.push(NULL);
    level++;
  }
 }
 return sum;
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
  //currect ans
  cout<<sumOfK(root,2);
}