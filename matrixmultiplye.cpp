#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int m1[a1][a2];
    int m2[a2][a3];

    for(int i=0;i<a1;i++){
        for(int j=0;j<a2;j++)
        cin>>m1[i][j];
    }


    for(int i=0;i<a2;i++){
        for(int j=0;j<a3;j++)
        cin>>m2[i][j];
    }


    int ans[a1][a3];
    for(int i=0;i<a1;i++){
        for(int j=0;j<a3;j++)
        ans[i][j]=0;
    }


    for(int i=0;i<a1;i++){
        for(int j=0;j<a3;j++){
            for(int k=0;k<a2;k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }


    for(int i=0;i<a1;i++){
        for(int j=0;j<a3;j++)
        cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    
    return 0;
}
