#include<iostream>
using namespace std;

class Student 
{
    public:
      int rollNo;
      string name;
      float marks;
};

int main ( )
{
    Student s1;
    s1.rollNo = 23;
    s1.name = " Ali Khan";
    s1.marks = 86;
    
    cout<<"Student Roll No : "<<s1.rollNo<<endl;
    cout <<"Student Name : "<<s1.name<<endl;
    cout<<"Student Marks : "<<s1.marks;
    
    return 0;
    
}