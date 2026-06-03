#include<iostream>
using namespace std;

template<class T>

T add(T a , T b)
{
    return a + b;
 }
    

int main()
{
    cout<<"Hello World !\n";
    cout<<"Int addition: "<<add(2,4)<<endl;
    cout<<"Float addition: "<<add(3.5,6.2);
    
    return 0;
}