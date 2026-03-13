#include<iostream>
using namespace std;

class Student 
{
    private :
      int rollNo;
      string name;
      float marks;
      
      public: 
       void setInfo(int r , string n , float m)
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
    Student s1 , s2;
    
    s1.setInfo(10 , "Muzammil" , 94.6);
    s1.getInfo();
    
    s2.setInfo(15 , "Saad" , 93.6);
    s2.getInfo();
    
    return 0;
}