using namespace std;

class Numbers {
    int num1, num2;
public:
    Numbers() {
        num1 = 0;
        num2 = 0;
    }
    
    Numbers(int x, int y)
        num2 = y;
    }
    
    void display() {
        cout << "Numbers are: " << num1 << ", " << num2 << endl;
    }
};

int main() {
    Numbers obj1;      
    Numbers obj2(10, 20); 
    obj1.display();
    obj2.display();
    return 0;
}


