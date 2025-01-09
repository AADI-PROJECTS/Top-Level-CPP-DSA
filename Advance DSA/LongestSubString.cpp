#include<iostream>
#include<vector>
using namespace std;
//diff subsequance and substirng 
//subsequance are like choose diffent value of the string
//substring are contineouce choose the value  
int main()
{
  string st;cin>>st;
  vector<int> dic(256,-1);
   int maxlen=0,start=-1;
   for(int i=0;i<st.size();i++){
    if(dic[st[i]]>start){
      start=dic[st[i]];
    }
    dic[st[i]]=i;
    maxlen=max(maxlen,i-start);
   }
   cout<<maxlen;
}