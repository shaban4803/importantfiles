#include <iostream>
#include <conio.h>
using namespace std;
class test
{
    private:
    int x;
    public:
    void in(){
        cout<<"Enter a number : "<<endl;
        cin>>x;
    }
    void out(){
        cout<<"The value of x="<<x<<endl;
        }
};
main(){
    test std1,std2,std3,std4,std5;
    std1.in();
    std1.out();
    std2.in();
    std2.out(); 
    std3.in();
    std3.out(); 
    std4.in();
    std4.out();
    std5.in();
    std5.out();
    getch();
}
