#include<iostream>
using namespace std;

class Teacher
{
    private:
      string name;
      string subject;
      double salary;

      public:
      Teacher (string name , string subject , double salary)
      {
          this->name = name;
          this->subject = subject;
          this->salary = salary;
      }
      
      void getInfo()
      {
          cout<<"Name:"<<name<<endl;
          cout<<"Subject:"<<subject<<endl;
          cout<<"Salary:"<<salary<<endl;
      }
};

int main( )
{
    Teacher t1("Ali Haider","ICT",20000);
    t1.getInfo();
    
    return 0;
}