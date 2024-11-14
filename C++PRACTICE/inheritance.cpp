#include<iostream>

using namespace std;


class college
{
    public:
  int id;
  string name;
  string address;


  college (int id =0, string name = "default",string address="default1"):id(id),name(name),address(address)
  {  
    cout<<"parent constructor\n";
  
   }

   void display()
   {

      cout<<id<<" "<<name <<" "<<address<<endl;


   }

};

class child : public college
{

    public:
    child (int id,string name,string addrss):college(id,name,addrss)
  {

   cout<<"student constructor\n";

  }

};



int main()
{
      

  child st1(101,"Kiran","sira");
   st1.display();


}


