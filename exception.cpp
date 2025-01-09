#include<iostream>
using namespace std;
int main(){
    int numerator=10;
    int denominator=0;
    try{
        if(denominator==0){
            throw"division by zero is not allowed";
        }
        double result = (numerator/denominator);
        
        cout<<result<<"result"<<endl;
    }
    catch(const exception& e){
        cerr<<"exception caught:"<<e.what()<<endl;
    }
    return 0;
}