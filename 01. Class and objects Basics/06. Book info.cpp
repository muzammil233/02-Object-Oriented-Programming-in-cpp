#include<iostream>
using namespace std;

class Book 
{
    public:
      string author;
      int pages;
      string title;
      
      void setInfo(string a , int p , string t)
         {
             author = a;
             pages = p;
             title = t;
         }
      
      void getInfo( )
          {
              cout<<"Author:"<<author<<endl;
              cout<<"Title:"<<title<<endl;
              cout<<"Pages:"<<pages<<endl;
          }
};

int main ( )
{
          Book b1;
          b1.setInfo("Nepolean Hill" , 256 , "Think and Grow Rich");
          b1.getInfo();
          
          return 0;
}
              