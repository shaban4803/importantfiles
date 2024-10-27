#include<iostream>
#include<iostream>
using namespace std;

class Over
{
	private:
		int num;
		char ch;
	public:
		Over()
		{
			num = 0;
			ch = 'X';
		}
		Over (int n, char c)
		{
			num = n;
			ch = c;
		}
		void show()
		{
			cout << "Num = " << num << endl;
			cout << "Char = " << ch << endl;
		}
};

int main()
{
	Over first, second(100,'P'); 
	cout << "The Content of first is = " << endl;
	first.show();
	cout << "The Content of second is = " << endl;
	second.show();  
	return 0;


