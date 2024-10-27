#include<iostream>
using namespace std;
class Circle
{
	private:
		float radius;
		public:
			void get_radius(float r);
		
			void area();
		
			void circum();
			
			
};

void Circle::get_radius(float r){
	
		radius=r;
}

void Circle::area()
         	{
				cout<<"\n Area of circle:"<<3.14*radius*radius;
			}
			
void Circle::circum()
            {
				cout<<"\n Circumference"<<2*3.14*radius;
			}

int main(){
	Circle c1;
	
	float rad;
	
	cout<<"\n Enter radius:";
	
	cin>>rad;
	
	c1.get_radius(rad);
	
	c1.area();
	
	c1.circum();
	
	return 0;
	
}
