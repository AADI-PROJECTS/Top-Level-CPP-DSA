#include<iostream>
using namespace std;
void sieveoferotosthenes(int n)
{
    int prime[100]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
//the above code is seive of erotosthenes
void sieveprimefactor(int n){
    int primefact[100]={0};

    for(int i=2;i<=n;i++){
        primefact[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(primefact[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(primefact[j]==j){
                    primefact[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<primefact[n]<<" ";
        n=n/primefact[n];
    }
}
int main()
{
    int n;
    cin>>n;
    sieveoferotosthenes(n);
    cout<<endl;
    cout<<"enter the value for find the multipal or LCM";
    int m;
    cin>>m;
    sieveprimefactor(m);
}