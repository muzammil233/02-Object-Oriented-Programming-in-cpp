#include<iostream>
using namespace std;

class Vehicle 
{
    public:
       string brand;
       
    Vehicle(string brand)
    {
        this->brand = brand;
    }
};

class Car : public Vehicle
{
    public:
      string car;
      int model;
      
    Car(string car , int model , string brand) : Vehicle(brand)
    {
        this->model = model;
        this->car = car;
    }
     void show()
     {
         cout<<"Brand Name:"<<brand<<endl;
         cout<<"Car Name:"<<car<<endl;  
         cout<<"Model:"<<model;
     }
};

int main ( )
{
    Car c1("Corolla" , 2019 , "Toyota" );
    c1.show();
    
    return 0;
}