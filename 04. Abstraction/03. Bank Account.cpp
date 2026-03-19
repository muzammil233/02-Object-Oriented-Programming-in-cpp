#include<iostream>
using namespace std;

class BankAccount
{
    protected:
      string accountNum;
      double balance;
      
      virtual void deposit() = 0;
      virtual void withdraw() = 0;
      virtual void displayBalance() = 0;
};

class CurrentAccount : public BankAccount
{
    public:
    double amountdep;
    double amountwd;
    
     CurrentAccount(string accountNum , double balance , double amountdep , double amountwd)
     {
         this->accountNum = accountNum;
         this->balance = balance;
         this->amountdep = amountdep;
         this->amountwd = amountwd;
      }
      
      void deposit ()
      {
          balance = balance + amountdep;
      }
      
      void withdraw()
      {
          if(amountwd<=balance)
          {
              cout<<"Transaction Successful!"<<endl;
              balance = balance - amountwd;
              cout<<"Amount withdrawn:"<<amountwd<<endl;
          }
          else
          {
              cout<<"Insufficient Balance! "<<endl;
              cout<<"Overdraft facility available , Enter 'y' , 'n': "<<endl;
              char choice;
              cin>>choice;
              if(choice=='y')
              {
                  cout<<"Transaction Successful!"<<endl;
                  balance = balance - amountwd;
              }
              else
              {
                  cout<<"Transaction Cancelled.";
              }
          }
       }
       void displayBalance()
       {
           cout<<"Account Number:"<<accountNum<<endl;
           cout<<"Balance:"<<balance<<endl;
       }
};

class SavingAccount : public BankAccount 
{
    public:
    double amountdep;
    double amountwd;
    
      SavingAccount(string accountNum , double balance , double amountdep , double amountwd)
      {
          this->accountNum = accountNum;
          this->balance = balance;
          this->amountdep = amountdep;
          this->amountwd = amountwd;
      }
      
      void deposit()
      {
          balance = balance + amountdep;
      }
      
      void withdraw()
      {
          if(amountwd<=balance)
          {
              cout<<"Transaction Successful!"<<endl;
              balance = balance - amountwd;
              cout<<"Amount Withdrawn:"<<amountwd<<endl;
          }
          else
          {
              cout<<"Insufficient Balance!"<<endl;
          }
      }
       void displayBalance()
       {
           cout<<"Account Number:"<<accountNum<<endl;
           cout<<"Balance:"<<balance<<endl;
       }
 
 };
  
int main()
{
    CurrentAccount ca("pk1234" , 100000 , 60000 , 140000);
    cout<<"Current Account Info."<<endl;
    ca.deposit();
    ca.withdraw();
    ca.displayBalance();
    
    cout<<endl;
    
    SavingAccount sa("nk356" , 100000 , 60000 , 130000);
    cout<<"Saving Account Info."<<endl;
    sa.deposit();
    sa.withdraw();
    sa.displayBalance();
    
    return 0;
}    
