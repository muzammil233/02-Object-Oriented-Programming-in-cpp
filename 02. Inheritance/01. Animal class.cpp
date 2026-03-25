#include<iostream>
using namespace std;

class Animal 
{
    public:
      string name;
      void speak( )
      {
          cout<<"All animals speak differently \n";
      }
};

class Dog : public Animal
{
    public:
     void setName(string n)
     {
         name = n;
     }
     
     void bark()
     {
         cout<<"The dog barks";
     }
     
     void showName()
     {
         cout<<"Name of Dog:"<<name<<endl;
     }
};

int main()
{
   Dog d1;
   d1.speak();
   d1.setName("Tommy");
   d1.showName();
   d1.bark();
   
   return 0;
}