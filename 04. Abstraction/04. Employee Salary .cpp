#include<iostream>
using namespace std;

class Employee 
{
    protected:
     int Id;
     string name;
     double salary;
    
    virtual double calculateSalary( ) = 0;
    virtual void displayDetails( ) = 0;
};

class ContractEmployee : public Employee 
{
    public:
      int hoursworked;
      int rateperhour;
      
      ContractEmployee(int Id , string name ,  int hoursworked , int rateperhour)
      {
          this->Id = Id;
          this->name = name;
          this->hoursworked = hoursworked;
          this->rateperhour = rateperhour;
      }
      
      double calculateSalary ( )
      {
          salary = rateperhour  * hoursworked;
          return salary;
      }
      void displayDetails( )
      {
          cout<<"Emoloyee Id:"<<Id<<endl;
          cout<<"Employee Name:"<<name<<endl;
          cout<<"Salary:"<<salary<<endl;
      }
};

class PermanentEmployee : public Employee 
{
    public:
      double bonus;
      
      PermanentEmployee(int Id , string name , double salary , double bonus)
      {
          this->Id = Id;
          this->name = name;
          this->salary = salary;
          this->bonus = bonus;
      }
      
      double calculateSalary ( )
      {
          salary = salary + bonus;
          return salary;
      }
      
      void displayDetails ( )
      {
          cout<<"Employee Id:"<<Id<<endl;
          cout<<"Employee Name:"<<name<<endl;
          cout<<"Salary:"<<salary<<endl;
      }
};

int main ( )
{
          ContractEmployee ce(12 , "Ali" , 8 , 500);
          ce.calculateSalary();
          ce.displayDetails();
          cout<<endl;
          PermanentEmployee pe(20 , "Sara" , 50000 , 10000);
          pe.calculateSalary();
          pe.displayDetails();
          
          return 0;
}