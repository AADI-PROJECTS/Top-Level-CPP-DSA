#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)||(i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }

}
//revers zig zag pattern 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n=9;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=3;j++){
//       if((i+j)%4==0 ||(j==2 and i%4==0)){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
// }
// }