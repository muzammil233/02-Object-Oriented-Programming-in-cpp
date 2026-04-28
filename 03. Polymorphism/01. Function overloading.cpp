#include<iostream>
using namespace std;

class Printer
{
	public:
		
		int print(int n)
		{
			return n;
		}
		
		double print(double n)
		{
			return n;
		}
		
		string print(string name)
		{
			return name;
		}
};

int main()
{
	Printer p;	
	cout<<"Integer: "<<p.print(20);
	cout<<"\nDouble: "<<p.print(5.5);
	cout<<"\nString: "<<p.print("Ali Haider");
	
	return 0;
}