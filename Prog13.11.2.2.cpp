#include<iostream>

using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() {
        this->length = this->breadth = 1;
    }

    Rectangle(int l, int b = 2) {
        this->length = l;
        this->breadth = b;
    }

    void area() {
        cout << "Area: " << this->length * this->breadth << endl;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5);
    Rectangle rect3(5, 6);
    rect1.area();
    rect2.area();
    rect3.area();
    return 0;
}

