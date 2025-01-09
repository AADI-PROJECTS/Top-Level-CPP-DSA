#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    bool gender;
    public:
    student (){
        //its call shadow copy it is not copy the location 
        cout<<"default comstraucter"<<endl;
    }
    student (string n,int a ,bool g ){
        name=n;
        age=a;
        gender=g;
    }
    student(student &a){
        //it is call deep copy becuse of copy the location
        cout<<"copy comstructer"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    //operator overload like +,=,-,etc
    bool operator ==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
    ~student(){
        //becuase we are create the 2 constructor
        cout<<"disconstructor"<<endl;
    }
    // void input(){
    //     cout<<"enter the name";
    //     cin>>name;
    //     cout<<"enter the age";
    //     cin>>age;
    //     cout<<"enter the gender";
    //     cin>>gender;
    // }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
       cout<<gender<<endl;
    }
    
};//we need to try the for loop on input and display function
int main(){
    student first;
    // for(int i=0;i<3;i++){
    // first.input();
    // }
    // for(int j=1;j<=3;j++){
    // first.display();
    // }
 student ab("addi",21,1);   
 ab.display();
 student m=ab;
 m.display();
 if(m==ab){
    cout<<"ab or m both are same";
 }
 else{
    cout<<"not same";
 }
}
