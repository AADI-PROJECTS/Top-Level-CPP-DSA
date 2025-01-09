#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculatearea()=0;

};
class circle : public shape{
    public:
    void calculatearea(){
        cout<<"area=22/7* r*r";
    }
};