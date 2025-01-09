#include<iostream>
using namespace std;
class A{
    private:
    int num1;
    int num2;
    public:
    A(int a,int b){
        num1=a;
        num2=b;
    }
    friend int addnum(const A& obj);
};
int addnum(const A& obj){
    return obj.num1+obj.num2;
}
int main(){
    A myobj(34,35);
    int sum=addnum(myobj);
    cout<<"sum"<<sum<<endl;
    return 0;
}