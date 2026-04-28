#include<iostream>
using namespace std;

class Calculator
{
	public:
		
		
		int add(int n1 , int n2)
		{
			int sum = n1 + n2;
			return sum;
		}
		
		double add(double n1 , double n2)
		{
			double sum = n1 + n2;
			return sum;
		}
};

int main()
{
	Calculator c;
	cout<<"Integer Sum: "<<c.add(3,4);
	cout<<"\nDouble Sum: "<<c.add(4.5 , 5.7);
	
	return 0;
}