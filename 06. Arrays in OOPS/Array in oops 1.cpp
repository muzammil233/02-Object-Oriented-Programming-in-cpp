#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollNo;
		float marks[3];
	
	public:
		
		void input()
		{
			cout<<"Enter Name of Student: ";
			getline(cin , name);
			cout<<"Enter Roll No of Student: ";
			cin>>rollNo;
			
			cout<<"\nEnter marks of 5 Quizzes:";
			for(int i=0; i<5; i++)
			{
				cin>>marks[i];
			}
		}
		
		double calculateAverage()
		{
			float sum = 0;
			float average = 0;
			for(int i=0; i<5; i++)
			{
				sum = sum + marks[i];
			}
			average = sum / 5.0;
			return average;
		}
		
		void result()
		{
			cout<<"Student Name: "<<name<<endl;
			cout<<"Student Roll No: "<<rollNo<<endl;
			cout<<"Student marks: ";
			for(int i=0; i<5; i++)
			{
				cout<<marks[i]<<" ";
			}
			cout<<"\nAverage Marks: "<<calculateAverage();
		}
	
};

int main()
{
	Student s1;
	s1.input();
	s1.result();
	
	return 0;
}