#include<iostream>
using namespace std;
class Marks
{
	private:
	int a,b,c;
	public:
	void in()
	{
	  cout<<"Enter  three marks";
	  cin>>a>>b>>c;	
	}
	int sum()
	{
		return a+b+c;
	}
	float avg()
	{
		return (a+b+c)/3.0;
	}
};
	int main()
	{
		Marks m;
		int s;
		float a;
		m.in();
		s=m.sum();
		a=m.avg();
		cout<<"Sum="<<s<<endl;
		cout<<"Average="<<a;
		return 0;
	}
	
	
	
	

