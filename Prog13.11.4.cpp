#include<iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex() { 
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) { 
        real = r;
        imag = i;
    }

    void display() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;                
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

