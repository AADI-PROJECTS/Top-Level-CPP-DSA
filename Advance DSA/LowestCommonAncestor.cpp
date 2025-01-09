#include<iostream>
#include<vector>
using namespace std;
//ancestor mean the common point of the daiverse tree
struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool getpath(node* root,int key,vector<int> &path){
    if(root==NULL)
    return false;
    path.push_back(root->data);
    if(root->data == key)
    return true;
    if(getpath(root->left,key,path) || getpath(root->right,key,path))
    return true;
    path.pop_back();
    return false;
}
int LCA(node* root,int n1,int n2){
    vector<int>path1,path2;
   
    if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
        return -1;
    }
    int pc;//pathchange
    for(pc=0;pc<path1.size() && pc<path2.size();pc++){
        if(path1[pc] != path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
node* LCA2(node* root,int n1,int n2){
    if(root==NULL)
    return NULL;
    
    if(root->data == n1 || root->data == n2)
    return root;

    node* leftlca=LCA2(root->left,n1,n2);
    node* rightlca=LCA2(root->right,n1,n2);
    if(leftlca && rightlca)
    return root;

    if(leftlca !=NULL)
    return leftlca;
    return rightlca;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->right=new node(4);
    root->right->left=new node(6);
    root->right->left->left=new node(7);
    root->right->right=new node(5);
    int n1=7;
    int n2=5;
    int lca=LCA(root,n1,n2);
    if(lca ==-1){
        cout<<"not present"<<endl;
    }
    else{
        cout<<"LCA : "<<lca;
    }
    cout<<endl;
    node* lca2=LCA2(root,n1,n2);
    if(lca2 ==NULL){
        cout<<"not present"<<endl;
    }
    else{
        cout<<"LCA 2: "<<lca2->data;
    }
}