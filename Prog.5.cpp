#include<iostream>
using namespace std;
class Book
{
	private:
		int BookID,Pages;
		float Price;
		public:
	    void get()	
		{
		  cout<<"Enter BOOK ID:";
		  cin>>BookID;
		  cout<<"Enter pages:";
		  cin>>Price;		
}
void show()
{
	cout<<"BookID="<<BookID<<endl;
	cout<<"Pages="<<Pages<<endl;
	cout<<"Price="<<Price<<endl;
}
void set(int id,int pg,float pr)
{
	BookID=id;
	Pages=pg;
	Price=pr;
}
float getPrice()
{
	return Price;
}	
	};
int main()	
{
	Book b1,b2;
	b1.get();
	b2.set(2,320,150.75);
	cout<<"\n The detail of most costly book is as follows:";
	if(b1.getPrice() >b2.getPrice())
	b1.show();
	else 
	b2.show();
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	

