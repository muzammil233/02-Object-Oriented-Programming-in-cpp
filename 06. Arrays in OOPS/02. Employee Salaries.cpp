#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int id;
		double salary[12];
		
		public:
		
		void input()
		{
			cout<<"Enter Name of Employee:";
			getline(cin , name);
			cout<<"Enter ID of Employee:";
			cin>>id;
			
			cout<<"Enter Salaries of 12 Months: "<<endl;
			for(int i=0; i<12; i++)
			{
				cin>>salary[i];
			}
		}
		double yearlySalary()
		{
			double sum = 0;
			double maxSalary = 0;
			for(int i=0; i<12; i++)
			{
				sum = sum + salary[i];				
			}
			return sum;
		}
		
		void HighestSalary()
		{
			double maxSalary = 0;
			int maxSalaryMonth = 0;
			for(int i=0; i<12; i++)
			{
				if(salary[i]>maxSalary)
				{
					maxSalary = salary[i];
					maxSalaryMonth = i+1;
				}
			}
			cout<<"Highest Salary: "<<maxSalary<<endl;
			cout<<"Highest Salary Month: "<<maxSalaryMonth<<endl;
		}
		
		void displayData()
		{
			cout<<"Employee Name: "<<name<<endl;
			cout<<"Employee ID: "<<id<<endl;
			cout<<"Employee 12 Month Salaries:";
			for(int i=0; i<12; i++)
			{
				cout<<salary[i]<<" ";
			}
			cout<<"\nYearly Salary: "<<yearlySalary()<<endl;
			HighestSalary();
		}
		
};

int main()
{
	Employee em;
	em.input();
	em.displayData();
	
	return 0;
}