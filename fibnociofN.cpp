#include<iostream>
using namespace std;

int fibn(int n){
    if(n==0 || n==1){
        return n;
    }
    int nth=fibn(n-1)+fibn(n-2);//  using recurtion calling
    return nth;
}
int main(){
    int n;
    cin>>n;
    cout<<fibn(n-1);
}