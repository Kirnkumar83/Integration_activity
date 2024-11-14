#include<iostream>
using namespace std;
#include<string.h>

class employee
{
  public:
   int id ;
   char *name;
   char *address;
   void initialize();
  void display();
   


};

void employee :: initialize()
{
  name = (char*)new char[10];
  address = new char[10];
  strcpy(name, "kiran");
  strcpy(address, "sira");
}
void employee:: display ()
{
     
    cout<< id<<name<<address<<endl;


}



int main()
{
  //new and delete opterator
   //new :is used to __allocator_base
   /*
   name =(char*)new int[10];
   name =
   //reference variable - &  alias to another variable or object;
   */ 

employee emp1;
emp1.display();
employee &emp2 =emp1;





} 
