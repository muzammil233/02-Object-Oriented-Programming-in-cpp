#include<iostream>
using namespace std;

class Student 
{
    private :
      int rollNo;
      string name;
      float marks;
      
     public: 
     
       // Parameterized Constructor.
       
       Student(int r , string n , float m)
       {
           rollNo = r;
           name = n;
           marks = m;
       }
       
       void getInfo()
       {
           cout <<"Student Roll No : "<<rollNo<<endl;
           cout<<"Student Name : "<<name<<endl;
           cout<<"Student Marks : "<<marks<<endl;
       }
};

int main ( )
{
    Student s1(10 , "Muzammil" , 94.6);
    s1.getInfo();
    
    return 0;
}