#include<iostream>
using namespace std;
bool qsort(int arr[],int n)
{
    if(n==1){
        return true;
    }
    int parr=qsort(arr,n-1);
    return arr[0]<arr[1] && parr;
}
void nagetive(int n){
    if(n==1){
        cout<<"1";
        return;
    }
    cout<<n<<endl;
    nagetive(n-1);
    cout<<"\n";
}
void possitive(int n){
    if(n==1){
        cout<<"1"<<endl;
        return ;
    }
    possitive(n-1);
    cout<<n<<endl;
}
int findfirst(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return findfirst(arr,n,i+1,key);
    
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int occ=lastocc(arr,n,i+1,key);
    if(occ!=-1){
        return occ;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
   // int arr[]={1,2,3,4,5};
    // cout<<qsort(arr,5)<<endl;
    // nagetive(5);
    // possitive(5);
    int arr[]={14,2,45,3,2,45};
   cout<<findfirst(arr,5,0,45)<<endl;
   cout<<lastocc(arr,5,0,45);

}