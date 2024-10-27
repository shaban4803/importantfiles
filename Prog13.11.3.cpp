#include<iostream>
using namespace std;

class Message {
    string text;
public:
    Message() { 
        text = "Hello, World!";
    }
    
    Message(string msg) { 
        text = msg;
    }
    
    void showMessage() {
        cout << "Message: " << text << endl;
    }
};

int main() {
    Message m1;              
    Message m2("Welcome!");    
    m1.showMessage();
    m2.showMessage();
    return 0;
}

