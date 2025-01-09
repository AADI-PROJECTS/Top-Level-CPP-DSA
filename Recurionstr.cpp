#include<iostream>
using namespace std;
void st(int n,char s,char e,char h){
    if(n==0){
        return ;
    }
    st(n-1,s,h,e);
    cout<<"move from "<<s<<"to"<<e<<endl;
    st(n-1,s,e,h);
}
string ss(string s){
    if(s.length()==0){
        return "";
    }
    char m=s[0];
    string ans= ss(s.substr(1));
    if(m==ans[0]){
        return ans;
    }
    return (m+ans);
}
// for set value at the end
string set(string s){
    if(s.length()==0){
        return "";
    }
    char c=s[0];
    string result=set(s.substr(1));
    if(c=='x'){
        return result+c;
    }
    return c+result;
}
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char c=s[0];
    string rest=s.substr(1);
    subseq(rest,ans);
    subseq(rest,ans+c);
}
void sqnum(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string rest=s.substr(1);
    sqnum(rest,ans);
    sqnum(rest,ans+ch);
    sqnum(rest,ans+to_string(code));
}
// based on phone key pad
string arr[]={"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char c=s[0];
    //to convert the string to intiger;
    string code=arr[c-'0'];
    string r=s.substr(1);
 for(int i=0;i<code.length();i++){
    keypad(r,ans+code[i]);
 }

}
int main(){
    st(3,'A','C','B');
    cout<<ss("aadiilll");
    cout<<"\n";
    cout<<set("asdzxxasxsdfsfxasdkfjxxsf");
    cout<<endl;
    subseq("ABC","");
    cout<<endl;
    sqnum("AB","");
    cout<<endl;
    keypad("23","");
}
