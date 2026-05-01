#include<iostream>
using namespace std;

template<class T>

class Box
{
	public:
		T value;
		
	Box(T v)
	{
		value = v;
	}
	
	void display()
	{
		cout<<"Value: "<<value<<endl;
	}
};

int main()
{
	Box<int> b1(10);
	Box<float> b2(5.67);
	Box<char> b3('M');
	
	b1.display();
	b2.display();
	b3.display();
	
	return 0;
}