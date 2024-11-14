#include<iostream>
using namespace std;


struct employee
{


    int id;
    char favchar;
    float salary;
};


int main()
{
    struct employee harry;
    harry.id = 10;
    harry.favchar='c';
    harry.salary = 20000;

     

 cout<< harry.id<<" "<<harry.favchar<<" "<<harry.salary<<endl;
 

}