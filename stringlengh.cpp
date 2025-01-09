#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   cin.ignore();
   char arr[n+1];
   cin.getline(arr,n);
   cin.ignore();
   int i=0;
   int currline =0,maxline=0;
   int st=0,maxst=0;
   while(1)
   {
      if(arr[i]==' ' || arr[i]=='\0'){
         if(currline>maxline){
            maxline=currline;
            maxst=st;

         }
         currline =0;
         st=i+1;
      }
      else{
      currline++;
      }
     if(arr[i]=='\0')
    break;
    i++;
   }
 cout<<maxline<<endl;
 for(int i=0;i<maxline;i++)
 cout<<arr[i+maxst];
}