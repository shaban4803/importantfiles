#include<iostream>
using namespace std;

class Employee {
    string name;
    int id;
public:
    Employee() { 
        name = "Unknown";
        id = 0;
    }

    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Employee: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee emp1;            
    Employee emp2("John", 101); 
    emp1.display();
    emp2.display();
    return 0;
}

