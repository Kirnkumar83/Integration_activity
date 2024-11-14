#include<iostream>

using namespace std;
class student
{

  protected:
    int id ;
    string name;
    string address;

public:
    student(int id=0, string name="def",string address= "def"):id(id),name(name),address(address)
    {}

    

    void display()
    {


        cout<<id<<" "<<name<<" "<<address;

    }
};

class member : public student
{

   public:
   int marks;
    member(int id=0, string name="def",string address= "def",int marks=0):student(id,name,address),marks(marks)
    {}


 void display()
    {


        cout<<id<<" "<<name<<" "<<address<<" "<marks;
        
    }


};



int main()
{

 student st1 (10, "kiran","sira");
 st1.display();

 member mb1(20,"nikhil","mumbai",67);
 mb1.display();

 /*
  student *st1 = new member(10,"sira","sira",80);
  st1->display();
 */
    //replacing old functon logic with new logic
}