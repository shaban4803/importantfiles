#include<iostream>

using namespace std;

class Numbers {
    int num1, num2;

public:
    Numbers() {
        this->num1 = 0;
        this->num2 = 0;
    }

    Numbers(int x, int y) {
        this->num1 = x;
        this->num2 = y;
    }

    void display() {
        cout << "Numbers are: " << this->num1 << ", " << this->num2 << endl;
    }
};

int main() {
    Numbers obj1;
    Numbers obj2(10, 20);
    obj1.display();
    obj2.display();
    return 0;
}

