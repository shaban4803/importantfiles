#include<iostream>
#include<conio.h>
using namespace std;
class Hello
{
	private:
	int x,y,sum;
	public:
		Hello()
		{
			cout<<"Enter two numbers"<<endl;
			cin>>x;
			cin>>y;
			sum=x+y;
		cout<<"sum="<<sum<<endl;
			
		}
};
main()
{
	Hello x,y,z;
	getch();
}
