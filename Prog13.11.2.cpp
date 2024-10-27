#include<iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() { 
        length = breadth = 1;
    }

    Rectangle(int l, int b = 2) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle rect1;           
    Rectangle rect2(5);       
    Rectangle rect3(5, 6);    
    rect1.area();
    rect2.area();
    rect3.area();

