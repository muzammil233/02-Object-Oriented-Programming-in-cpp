#include<iostream>
using namespace std;

class Person
{
    public:
      string name;
      int age;
};

class Student : public Person
{
    public:
     int rollNo;
     float marks;
     
     void setData(string name , int age , int rollNo , float marks )
     {
         this->name = name;
         this->rollNo = rollNo;
         this->age = age;
         this->marks = marks;
     }
     
     void showData()
     {
         cout<<"Name:"<<name<<endl;
         cout<<"Age:"<<age<<endl;
         cout<<"Roll No:"<<rollNo<<endl;
         cout<<"Marks:"<<marks<<endl;
     }
};

int main()
{
     Student s1;
     s1.setData("Fahad" , 18 , 29 , 98.5);
     s1.showData();
     
     return 0;
}