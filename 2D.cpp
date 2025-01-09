#include<iostream>
using namespace std;
signed main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    int rowstart=0,rowend=n-1,columestart=0,columeend=m-1;

   while(rowstart<=rowend && columestart<=columeend){
    //row start
    for(int col=columestart;col<=columeend;col++){
        cout<<a[rowstart][col]<<" ";
    }
    rowstart++;
   
   //colume end
    for(int row=rowstart;row<=rowend;row++ ){
    cout<<a[row][columeend]<<" ";
    }
    columeend--;
    //row end
    for(int col=columeend;col>=columestart;col--){
      cout<<a[rowend][col]<<" ";
    }
      rowend--;
    //columestart
    for(int row=rowend;row>=rowstart;row--){
    cout<<a[row][columestart]<<" ";
    }
    columestart++;
}
return 0;
}