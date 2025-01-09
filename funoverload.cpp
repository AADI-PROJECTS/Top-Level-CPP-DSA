#include<iostream>
//its call  OPERATOR OVERLOADING
using namespace std;
class complex{
    //this is 2th type of polymorephism
 private:
    int real,imag;
     public:
     
     complex(int r=0,int i=0){
        real=r;
        imag=i;
     }    
    complex operator+(complex const& obj){
        complex ans;
        ans.real=real+obj.real;
        ans.imag=imag+obj.imag;
        return ans;
    } 
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    } 
};
int main(){
    
    complex c1(10,5), c2(2,4);
    complex c3=c1+c2;                           
    c3.display();
    //THE 3RD FORM OF POLYMOREPHISM IS VIRTUAL USE ON RUN TIME LIKE VIRTUAL VOID DISPLAY()
}          

