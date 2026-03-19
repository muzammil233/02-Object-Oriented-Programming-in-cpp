#include<iostream>
using namespace std;

class FoodOrder
{
    protected:
      int customerId;
      string customerName;
      double price;
     
      virtual double FinalBill() = 0;
      virtual void orderDetails() = 0;
};

class PizzaOrder : public FoodOrder
{
    public:
       double tax;
       
     PizzaOrder(int I , string n , double p  )
     {
         customerId = I;
         customerName = n;
         price = p;
        
     }
    
     double FinalBill()
     {
         tax = (10.0/100.0) * price;
         price = price + tax;
         return price;
     }
     
     void orderDetails()
     {
         cout<<"Customer ID:"<<customerId<<endl;
         cout<<"Customer Name:"<<customerName<<endl;
         cout<<"Final Bill:"<<price<<endl;
     }
     
};

class BurgerOrder : public FoodOrder
{
    public:
        double discount;
        
        
      BurgerOrder(int I , string n , double p )  
      {
          customerId = I;
          customerName = n;
          price = p;
          
       }
    
         double FinalBill()  
         {
             discount = (15.0/100.0) * price;
             price = price - discount;
             return price;
         }
         
         void orderDetails()
         {
             cout<<"Customer Id:"<<customerId<<endl;
             cout<<"Customer Name:"<<customerName<<endl;
             cout<<"Final Bill:"<<price<<endl;
         }
};

int main()
{
     PizzaOrder po(100 , "Ahmad" , 1000 );
     po.FinalBill();
     po.orderDetails();
     cout<<endl;
     
     BurgerOrder bo(200 , "Sara" , 1000 );
     bo.FinalBill();
     bo.orderDetails();
     return 0;
}