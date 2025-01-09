#include<iostream>
using namespace std;
class person{
    private:
    int age ;
    string name;
    string address;
    public:
    void enter(){
        cout<<"enter the age=";
        cin>>age;
        cout<<"enter name=";
        cin>>name;
        cout<<"enter the adress=";
        cin>>address;
    }
    void display(){
        cout<<"age="<<age<<endl;
        cout<<"name="<<name<<endl;
        cout<<"adress="<<address<<endl;
        
    }
};
int main(){
    person 
    anushka,anas,rohit;
    anushka.enter();
    anushka.display();
    return 0;
    anas.enter();
    anas.display();
    return 0;
    rohit.enter();
    rohit.display();
    return 0; 

}
