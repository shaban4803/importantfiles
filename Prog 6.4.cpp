#include<iostream>
using namespace std;
class Result 
{
	private:
		int rno,marks[3];
		
		char name[50];
		
		public:
			
		void input();
	
		void show();
		
		int total();
	
		float avg();
		
};
	void Result::input()
		{
			cout<<"Enter Roll No:";
			cin>>rno;
			
			cout<<"Enter Name:";
			cin>>name;
			
			for(int i=0; i<3; i++)
			{
				cout<<"Enter marks["<<i<<"]";
				cin>>marks[i];
				
			}
			
		}
		void Result::show()
		{
		 cout<<"Roll No ="<<rno<<endl;
		 cout<<"Name="<<name<<endl;
		 for(int i=0; i<3; i++)
		 cout<<"Marks["<<i<<"]"<<marks[i]<<endl;
		 	
		}
		int Result::total()
		{
			int t=0;
			for(int i=0; i<3; i++)
			t=t+marks[i];
			return t;
			
		}
		float Result::avg()
		{
			int t=0;
			for(int i=0; i<3; i++)
			t=t+marks[i];
			return t/3;
		}

int main()
{
	Result res;
	res.input();
	res.show();
	
	cout<<"\n Total marks="<<res.total()<<endl;
	cout<<"Average marks="<<res.avg()<<endl;
	
	return 0;
}

