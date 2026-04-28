#include<iostream>
using namespace std;

class Car
{
	private:
		string brand;
	
	public:
		Car()
		{
			brand = "Unknown";
			cout<<"Default Constructor.\nBrand name: "<<brand<<endl;			
		}
		
		Car(string brand)
		{
			this->brand = brand;
		}
		
		void print()
		{
			cout<<"Parameterized Constructor.\nBrand Name: "<<brand<<endl;
		}
};

int main()
{
	Car c1;
	Car c2("Toyota");
	c2.print();
	
	return 0;
}		