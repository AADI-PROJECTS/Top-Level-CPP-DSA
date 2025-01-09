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
int search(int inOrder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inOrder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* BuildTresPostOrder(int postOrder[],int inOrder[],int start,int end){
    static int idx=4;//n-1
    if(start>end){
        return NULL;
    }
    int curr=postOrder[idx];
    idx--;
    node* ans=new node(curr);
    if(start == end){
        return ans;
    }
    int pos=search(inOrder,start,end,curr);
    ans->right=BuildTresPostOrder(postOrder,inOrder,pos+1,end);
    ans->left=BuildTresPostOrder(postOrder,inOrder,start,pos-1);
    return ans;
}
void inPrint(node* root){
    if(root==NULL){
        return;
    }
    inPrint(root->left);
    cout<<root->data<<" ";
    inPrint(root->right);
}
int main()
{
    int postOrder[]={4,2,5,3,1};
    int inOrder[]={4,2,1,5,3};
    node* result=BuildTresPostOrder(postOrder,inOrder,0,4);
    inPrint(result);
}