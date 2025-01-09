#include<iostream>
using namespace std;

int main()
{
int a=10;
int *p=new int();
*p=10;

//cout<<*p;
delete p;
p=new int[5];

cout<<p[5];
delete []p;

p=NULL;


}