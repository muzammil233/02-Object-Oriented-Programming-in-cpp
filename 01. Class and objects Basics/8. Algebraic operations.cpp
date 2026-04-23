#include<iostream>
using namespace std;

class Operation
{
      private:
      
          int a , b;
      
      public:
      
       void input()
        {
           cout<<"Enter Numbers : ";
           cin>>a>>b;
         }
      
      int getSum()
      {
          int sum = a + b;
          return sum;
      }
      
      int getSub()
      {
          int subtract = a - b;
          return subtract;
      }
      
      int getProduct()
      {
          int product = a * b;
          return product;
      }
      
};

int main()
{
    Operation sum;
    sum.input();
    cout<<"Sum: "<<sum.getSum();
    
    cout<<endl;
    
    Operation sub;
    sub.input();
    cout<<"Sbtraction: "<<sub.getSub();
    
    cout<<endl;
    
    Operation pro;
    pro.input();
    cout<<"Product: "<<pro.getProduct();
    
    return 0;
   
}