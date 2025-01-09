#include<iostream>
using namespace std;
void reverst(string s){
    if(s.length()==0){
        return;
    }
    string st=s.substr(1);
    reverst(st);
    cout<<s[0];
}
void replace(string sr){
    if(sr.length()==0){
        return;
    }
    if(sr[0]=='p' && sr[1]=='i'){
        cout<<"3.14";
        replace(sr.substr(2));
    }
    else{
        cout<<sr[0];
        replace(sr.substr(1));
    }
}

int main(){
    reverst("binod");
    cout<<endl;
    replace("pippppiiiipi");
}