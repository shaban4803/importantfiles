#include<iostream>

using namespace std;

class Message {
    string text;

public:
    Message() {
        this->text = "Hello, World!";
    }

    Message(string msg) {
        this->text = msg;
    }

    void showMessage() {
        cout << "Message: " << this->text << endl;
    }
};

int main() {
    Message m1;
    Message m2("Welcome!");
    m1.showMessage();
    m2.showMessage();
    return 0;
}

