#include<iostream>
using namespace std;

class Device
{
	public:
	string brand;
	string setBrand(string b)
	{
		brand = b;
		return b;
	}
	
};

class Computer : public Device
{
	public:
		int ram;
		int setRam(int r)
		{
			ram = r;
			return r;
		}
};

class Laptop : public Computer
{
	public:
		double price;
		void display()
		{
			cout<<"Brand: "<<brand<<endl;
			cout<<"Ram: "<<ram<<endl;
			cout<<"Price: "<<price<<endl;
		}
		
};

int main()
{
	Laptop lp;
	lp.setBrand("HP");
	lp.setRam(16);
	lp.price = 120000;
	lp.display();
	
	return 0;
}