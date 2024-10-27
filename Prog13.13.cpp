#include <iostream>
#include <conio.h>
using namespace std;
class travel
{
	private:
	int km,hr;
	public:
		travel()
		{
			km = hr = 0;
		}
		void get(){
		cout<<"enter kilometers travelled:";
		cin>>km;
		cout<<"entre hours travelled:";
		cin>>hr;
	}
	void show()
	{
		cout<<"you travelled"<<km<<" in "<< hr <<"hours"<<endl;
	
	}
	void add (travel p)
	{
		travel t;
		t.km = km + p.km;
		t.hr = hr + p.hr;
		cout<<"total travelling is"<<t.km<<"kilometers in"<<hr<<" hours"<<endl;
	
	}
};
int main()
{
	travel my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
	getch;
	}
		
