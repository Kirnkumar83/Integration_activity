#include<iostream>
#include<stdlib.h>

using namespace std;


class employee
{
  public:
  int id;
  int salary;
employee( int id=0, int salaray =0):id(id),salary(salary){}

void display()
{

cout<<id<<" "<<salary<<endl;
}

};

int main()
{
    int *ptr;
   employee *ptr1= new employee(101,20000);
 //=(employee*)malloc(sizeof(employee));
   // cout<<sizeof(ptr)<<endl<<sizeof(*ptr)<<endl;
    //cout<<sizeof(ptr1)<<endl<<sizeof(*ptr1)<<endl;
    
   // string *name;
    //cout<<sizeof(*name);
    //parent class pointer can hold the adress of the child;
    ptr1->display();

}