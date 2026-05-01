#include<iostream>
using namespace std;

class Add 
{
  public:
    int val;
    Add(int v)
    {
      val = v;
    }  
    Add operator+(Add obj)
    {
      Add temp(0);
      temp.val = val + obj.val;
      return temp;
     }
     void display()
     {
       cout<<"Addition: "<<val<<endl;
      }
 };
 
 int main()
 {
    Add n1(3);
    Add n2(5);
    Add n3 = n1 + n2;
    n3.display();
    
    return 0;
 }        