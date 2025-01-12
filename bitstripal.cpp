 #include<iostream>
using namespace std;
int getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    return (n|(1<<pos));
}
int tripalunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getbit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0)
        {
            ans=setbit(ans,i);
        }
    }
    return ans;
}
int main()
{
 int arr[]={1,2,1,2,3,1,3,2,5,3};
 cout<<tripalunique(arr,10);
 return 0;
}