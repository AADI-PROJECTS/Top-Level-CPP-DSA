#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string ak="aadil";
    string mk="malik";
    cout<<ak<<endl;
    //ak.clear();
    //ak.append(mk);
    if(ak.compare(mk)==0)
    cout<<"string are same";
    else{
        cout<<"string are not same";
    }
    //cout<<ak.compare(mk);
    string a="adfdsgfghdf";
    a.clear();
    if(a.empty()){
        cout<<"string is null";
    }
    else if (!a.empty())
    {
        cout<<"string is not null";
    }
     string a="aadilmalik";
 //use erase function
 a.erase(6,4);
 //use find funtion
cout<<a.find("dil")<<endl;
 cout<<a<<endl;
 string b="whatareyou";
 //use insert funtion
 b.insert(4," ");
 b.insert(11," doying");
 cout<<b<<endl;
  // find size of string with two methode
  cout<<b.size()<<endl;
  cout<<a.length()<<endl;
  //this is help in loop
  string c="aadil";
  for(int i=0;i<c.length();i++){
    cout<<c[i]<<endl;
  }
  //find value of string
  cout<<c.substr(2,5)<<endl;
  //convert string to integer
  string m="9971";
  int x= stoi(m);
  cout<<x+1<<endl;
  //integer to string
  int y=70;

  cout<<to_string(y)+"2"<<endl;
  //sort string funtion
  string z="xyzbca";
 sort(z.begin(),z.end());
  cout<<z<<endl;
    
}