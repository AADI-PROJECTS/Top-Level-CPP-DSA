#include<iostream>
using namespace std;
//'this' pointer 

class myclass
{
    public:
    int data;
    myclass(int value){
        this->data=value;
    }
    void display(){
        cout<<"data"<<this->data<<endl;
    }
};
int main(){
    myclass obj(69);
    obj.display();
    return 0;
}