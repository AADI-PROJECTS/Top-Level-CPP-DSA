#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> mylist={69,70,69};
    for(int element : mylist){
        cout<<element<<endl;
    }
    return 0;
}