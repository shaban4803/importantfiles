#include <iostream>
using namespace std;

#define pi 3.14 

class Circle {
private:
    float radius;

public:
    void get_radius(float r);
    void area();
    void circum();
};

void Circle::get_radius(float r)
 {
    radius = r;
}

void Circle::area()
 {
    cout << "\nArea of circle: " << pi * radius * radius;
}

void Circle::circum()
{
    cout << "\nCircumference: " << 2 * pi * radius;
}

int main() {
    Circle c1;
    float rad;
    cout << "\nEnter radius: ";
    cin >> rad;
    c1.get_radius(rad);
    c1.area();
    c1.circum();
    return 0;
}

