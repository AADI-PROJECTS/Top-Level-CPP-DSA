#include<iostream>
#include<vector>
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
vector<node*> ConstructBSTusingCATALAN(int start,int end){
    vector<node*> tress;
    if(start>end){
        tress.push_back(NULL);
        return tress;
    }
    for(int i=start;i<=end;i++){
        vector<node*>leftsub=ConstructBSTusingCATALAN(start,i-1);
        vector<node*>rightsub=ConstructBSTusingCATALAN(i+1,end);
        for(int j=0;j<leftsub.size();j++){
            node* templeft=leftsub[j];
           for(int k=0;k<rightsub.size();k++){
            node* tempright=rightsub[k];
            node* temp=new node(i);
            temp->left=templeft;
            temp->right=tempright;
            tress.push_back(temp);
           }
        }
    }
    return tress;
}
void preorder(node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    vector<node*> ans=ConstructBSTusingCATALAN(1,3);
    for(int i=0;i<ans.size();i++){
        cout<<i+1<<" : ";
        preorder(ans[i]);
        cout<<endl;
    }
}