#include<iostream>


using namespace std;


class parentclass
{
protected:
 int id;
 string name;
 char section;

parentclass()
{


cout<<"parent constructor";

}



};

class child : public parentclass
{
    char blood_group;
    string cell_num;
    string address;

public:

child()
{

    cout<<"childconstructor";
}
    
void display()
{

    cout<<id<< " "<<name<<" "<<section<<endl;
}



};

int main()
{

//Encapsulation is a process of binding the data and function together in a single entity or unit.
//in oops ,encapsulation is achieved through a class
//encapsulation leads to an important topic of data hiding/abstraction
//abstraction :hiding unnecessary data showing the related data in known as abstraction
//user not able to
//in order to avoid the reusability we use 
child ch1;
parentclass cl1;
cout<<sizeof(ch1)<<endl;
cout<<sizeof(cl1)<<endl;
cout<<sizeof(string)<<endl;
 
//ch1.id = 10;
ch1.display();
}
