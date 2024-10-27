#include<iostream>

using namespace std;

class Employee {
    string name;
    int id;

public:
    Employee() {
        this->name = "Unknown";
        this->id = 0;
    }

    Employee(string n, int i) {
        this->name = n;
        this->id = i;
    }

    void display() {
        cout << "Employee: " << this->name << ", ID: " << this->id << endl;
    }
};

int main() {
    Employee emp1;
    Employee emp2("John", 101);
    emp1.display();
    emp2.display();
    return 0;
}

