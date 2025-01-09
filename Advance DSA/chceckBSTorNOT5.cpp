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

bool checkBSTorNOT(node* root,node* min,node* max){
    if(root ==NULL)
    return true;

    if(min !=NULL && root->data <=min->data)
    return false;

    if(max !=NULL && root->data >=max->data)
    return false;

    bool totalLeft=checkBSTorNOT(root->left,min,root);
    bool totalRight=checkBSTorNOT(root->right,root,max);
    return totalLeft && totalRight;
}
int main()
{
    node* root=new node(2);
    root->left=new node(1);
    root->right=new node(4);

    if(checkBSTorNOT(root,NULL,NULL))
    cout<<"Valid Binary search tree";

    else
    cout<<"not valid";
}