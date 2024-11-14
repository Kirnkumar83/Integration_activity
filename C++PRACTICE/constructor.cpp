#include<iostream>
using namespace std;


class bankaccount
{
  public:

  int balance;
  string name;
  int number;

  bankaccount()
  {
    balance = 1000000 ;

    name = "Kiran  ";
    number = 40404;

       cout<<"constructor called"<<endl;      

  }
  void print_details()
  {
   cout<< balance <<" "<<name <<number <<endl;


  }
  bankaccount( int snumber , string sname , int sbalance)
{
   balance = sbalance;
   number =snumber;
   name = sname;  

}
//bankaccount(int a , string b ,s)
};

/*

:: scope resolution
//return type class naem :: functon name(){}
void bankaccount :: display()
{



}
//for the consturctor
class name :: function name()
{
       


}

//that what we need to know about when it comes to employee
*/
int main()
{


 bankaccount bk1,bk2;

 bankaccount bk3(10,"keerthi ",20000);
//spcecial class function used to initialize the object of the class;
//constructor are automatically executed by the compiler.
// compiler has a default constructor which has empty body;
//constructor name should be sama name as class
   //default constructor
   //parametereise constructor
   // copy constructor
   //explicit consturcter

 bk1.print_details();
 bk2.print_details();

 bk3.print_details();

 //copy constructor:
 //whenever u creare a new object by copying value from already existing object
 //build in constructor
 //writing more than one type of consturctor with differen paramertes
 cout<<"copy constructor"<<endl;
 bankaccount bk4 = bk3;
 bk4.print_details();

/*
 bankaccount(in id =0,string name "default",int balance =0)
{


}
//intializer
student( int sic =0,float spe = 0.0 ,string name =d ):id(sid):per(sper),name(sname);
{}
//this is pointer which always point to cuttent object

//this keyword can be avoided by using initializer
desturctor : whenever object goes out of scope ,end of the main
*/
//delete the object from the stack

}