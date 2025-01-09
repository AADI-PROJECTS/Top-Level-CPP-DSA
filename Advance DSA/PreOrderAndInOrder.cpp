#include<iostream>
using namespace std;
//Build Tree Using PreOrder And InOrder
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
int search(int InOrder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(InOrder[i] == curr){
            return i;
        }
    }
    return -1;
}
node* BuildTree(int PreOrder[],int InOrder[],int start,int end){
    static int idx=0;
    if(start > end){
        return NULL;
    }
    int curr=PreOrder[idx];
    idx++;
    node* ans=new node(curr);
    if(start == end){
        return ans;
    }
    int pos =search(InOrder,start,end,curr);
    ans->left=BuildTree(PreOrder,InOrder,start,pos-1);
    ans->right=BuildTree(PreOrder,InOrder,pos+1,end);
    return ans;
}
void PrintInOrder(node* root){
    if(root == NULL){
        return;
    }
    PrintInOrder(root->left);
    cout<<root->data<<" ";
    PrintInOrder(root->right);
}
int main()
{
    int PreOrder[]={1,2,4,3,5};
    int InOrder[]={2,4,1,5,3};
    node* result=BuildTree(PreOrder,InOrder,0,4);//n-1 pos
    PrintInOrder(result);
}