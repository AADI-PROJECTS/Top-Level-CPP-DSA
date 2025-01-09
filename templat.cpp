#include<iostream>
using namespace std;
template<class A>
class a
{
public:
A x=44.5;
A y=55.5;
void display(){
  cout<<"addition x and y="<<x+y<<endl;
}
};
int main(){
  a <float>malik;
  malik.display();
  return 0;
}  