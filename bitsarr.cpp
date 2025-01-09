 #include<iostream>
 using namespace std;
 int unique(int arr[],int n){
   int x=0;
   for(int i=0;i<n;i++){
    x=x^arr[i];
   }
   return x;
 }
 int setbit(int n,int pos){
  return ((n&(1<<pos))!=0);
 }
 void unique2value(int arr[],int n){
  int x=0;
  for(int i=0;i<n;i++){
     x=x^arr[i];
  }
  int unique1=x;
   int set=0,pos=0;
   //for check the value is 1 or not
   while(set!=1){
    set=x&1;
    pos++;
    x=x>>1;
   }
   int newx=0;
   //then we have set bit mean 1
   for(int i=0;i<n;i++){
    if(setbit(arr[i],pos-1)){
      newx=newx^arr[i];
    }
   }
  cout<<newx<<endl;
  cout<<(unique1^newx)<<endl;
 }
 int main()
 {
//  int arr[]={1,2,3,4,3,2,1};
//  cout<<unique(arr,7);
int arr[]={1,7,3,3,1,2};
unique2value(arr,6);
return 0;

 }