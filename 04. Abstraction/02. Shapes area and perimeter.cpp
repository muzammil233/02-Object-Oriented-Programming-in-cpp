#include<iostream>
using namespace std;

class Shape
{
    protected:
       string name;
       virtual double area( ) = 0;
       virtual double perimeter( ) = 0;
       virtual void displayName( ) = 0;
};

class Circle : public Shape
{
    public:
    double radius;
    Circle (string name , double radius ) 
    {
      this->name = name;
      this->radius = radius;
    }
      double area( )
      {
          double areaofCirlce = 3.14 * radius * radius;
          return areaofCirlce;
      }
      double perimeter( )
      {
          double perimeterofCircle = 2 * 3.14 * radius;
          return perimeterofCircle;
      }
      void displayName( )
      {
          cout<<"Shape:"<<name<<endl;
      }
     
};

class Rectangle : public Shape
{
    private:
    double length;
    double width;
    public:
    Rectangle(string name , double length , double width)
    {
        this->name = name;
        this->length = length;
        this->width = width;
    }
    
    double area()
    {
        double areaofRectangle = length * width;
        return areaofRectangle;
    }
    double perimeter()
    {
     double perimeterofRectangle = 2 * (length + width);
      return perimeterofRectangle;
    }
    void displayName ()
    {
        cout<<"Shape:"<<name<<endl;
    }
};

class Square : Shape
{
        private:
        double side;
        public:
        Square(string name , double side)
        {
            this->name = name;
            this->side = side;
        }
        
        double area()
        {
            double areaofSquare = side * side;
            return areaofSquare;
        }
        double perimeter ()
        {
            double perimeterofSquare = side * 4;
            return perimeterofSquare;
        }
        void displayName()
        {
            cout<<"Shape:"<<name<<endl;
        }
};
        
int main ( )
{
    Circle c("Cirlce" , 5);
    c.displayName();
     cout<<"Area of Circle:"<<c.area()<<endl;
     cout<<"Perimeter of Circle:"<<c.perimeter()<<endl;
     cout<<endl;
     Rectangle r("Rectangle" , 10 , 5);
     r.displayName();
     cout<<"Area of Rectangle:"<<r.area()<<endl;
     cout<<"Perimeter of Rectangle:"<<r.perimeter()<<endl;
     cout<<endl;
     Square s("Square" , 7);
     s.displayName();
     cout<<"Area of Square:"<<s.area()<<endl;
     cout<<"Perimeter of Square:"<<s.perimeter()<<endl;
     
     return 0;
}