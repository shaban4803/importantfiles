#include<iostream>
#define PI 3.14
using namespace std;
class circle 
{
	private:
		float radius;
	public:
	void get_radius(float r)
	{
		radius =r;
	}
	void area()
	{
		cout<<"\nArea of a circle:"<<PI*radius*radius;
	}
	void circum()
	{
		cout<<"\nCircumference of circle:"<<2*PI*radius;
	}
};
int main()
{
	circle c1;
	float rad;
	cout<<"\nEnter radius:";
	cin>>rad;
	c1.get_radius(rad);
	c1.area();
	c1.circum();
	return 0;
}
