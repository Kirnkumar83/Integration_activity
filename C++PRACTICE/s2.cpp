#include<iostream>
using namespace std;

class bankdetails
{

  public :

  int account_num;
  char name[20];
  int balance ;


  void get_details()
  {
    cout<<"enter the details";
     cin>>account_num ;
     cin >> name;
     cin >> balance ;

  

  }
  void print_details()
  {
   cout<<"the details of the account holder\n";
  cout<<account_num<<endl;
  cout<<name<<endl;
  cout<<balance;


  }

};


int main()
{

   bankdetails bk1,bk2;
   bk1.get_details();
   bk1.print_details(); 
   bk2.get_details();
   bk2.print_details();
}