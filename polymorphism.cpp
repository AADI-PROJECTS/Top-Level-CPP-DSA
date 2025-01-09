#include<iostream>
using namespace std;
class aa{
    public:
    void display(){
        cout<<"it example A";
    }
};
class dd:public aa{
    public:
    void display(){
        cout<<"it example B";
    }
};
int main(){
    
    dd obj;
    obj.display();
    return     0;
}

