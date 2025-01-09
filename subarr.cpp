/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}*/
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<climits>
#include<cmath>
using namespace std;
int main()
/*{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int total=INT_MIN;
for(int i=0;i<n;i++){
 for(int j=i;j<n;j++){
    int sum=0;
   for(int k=i;k<=j;k++){
    sum+=arr[k];
}
total=max(sum,total);
}
}
cout<<total<<endl;
return 0;
}*/
/*{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum;
    return 0;
}*/
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum=0;
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
            
        }
        sum=max(sum,currsum);
    }
    cout<<sum<<endl;
    return 0;
}