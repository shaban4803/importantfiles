#include<iostream>

using namespace std;

class Complex {
    float real, imag;

public:
    Complex() {
        this->real = 0;
        this->imag = 0;
    }

    Complex(float r, float i) {
        this->real = r;
        this->imag = i;
    }

    void display() {
        cout << "Complex number: " << this->real << " + " << this->imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(3.5, 2.5);
    c1.display();
    c2.display();
    return 0;
}

