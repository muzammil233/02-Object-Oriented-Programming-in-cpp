#include<iostream>
using namespace std;

class Rectangle 
{
    public:
       float length;
       float width;
       
       void setData(float l , float w)
       {
           length = l;
           width = w;
       }
       
       int calculateArea()
        {
            float area = length * width;
            return area;
        }
};

int main ( )
{
    Rectangle r1;
    r1.setData(10 , 5);
    cout<<"Area:"<<r1.calculateArea();
    
    return 0;
}