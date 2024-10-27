#include<iostream>
using namespace std;
class Book
{
	private:
		int BookID,Pages;
		float Price;
		public:
			void get();
			
			void show();
		
			void set(int id, int pg, float pr);
		
			float getPrice();
			
};

void Book::get()
            {
				cout<<"Enter Book ID:";
				cin>>BookID;
				cout<<"Enter Pages";
				cin>>Pages;
				cout<<"Enter Price";
				cin>>Price;
			}
	void Book::show()
	      	{
				cout<<"BookID="<<BookID<<endl;
				cout<<"Pagres="<<Pages<<endl;
				cout<<"price="<<Price<<endl;
				
			}
			void Book::set(int id, int pg, float pr)
			{
				BookID=id;
				Pages=pg;
				Price=pr;
				
			}
			float Book::getPrice()
			{
				return Price;
			}			

int main(){
	Book b1,b2;
	
	b1.get();
	b2.set(2,320, 150.75);
	
	cout<<"\n The detail of most costly book is as follows"<<endl;
	
	if
	    (b1.getPrice()>b2.getPrice())
        	b1.show();
	else
	    b2.show();
	return 0;
	
}
