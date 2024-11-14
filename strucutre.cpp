#include<iostream>
using namespace std;


typedef struct employee
{
    int eid;
    char favchar;
    float salary;
    /* data */
} employee;


int main()
{

    
    employee harry;
    employee shubham;
    harry.eid=1;
    harry.favchar = 'c';
    harry.salary = 1200000.00000;    
    cout<<harry.eid<<" "<<harry.salary << " "<<harry.favchar;


}


 