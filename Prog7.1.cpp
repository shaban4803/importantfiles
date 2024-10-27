#include<iostream.h>
#include<conio.h>

class Hello
{
    private:
        int n;
    public:
        Hello()
        {
            cout << "Object created..." << endl;
        }
};

void main()
{
    Hello x, y, z;
    getch();
}
