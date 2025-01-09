#include<iostream>
#include<string>
using namespace std;
class messagereceiver{
    public:
    void displaymessage(const string& message){
        cout<<"receiver message:"<<message<<endl;
    }
};
class messagesender{
    public:
    void sendmessage(messagereceiver& receivers,const string & message){
        receivers.displaymessage(message);
    }
};
int main(){
    messagereceiver receivers;
    messagesender  send;

    string message="this is example of message passing";

    send.sendmessage(receivers,message);
    return 0;
}