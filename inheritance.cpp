#include<iostream>
using namespace std;
class A{
    public:
    void aad(){
        cout<<"what do you want";

    }
};
//drived class 
class car : public A{
    public:
    void dis(){
  
        cout<<"speed like a supra";
    }
    
};
int main(){
    // we can inherit the code using  5 type of method
    car c;
    c.dis();
    cout<<endl;
    c.aad();
}