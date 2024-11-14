#include<iostream>
using namespace std;

class calculator 
{
    int num1,num2;
    public:
    calculator(int num1 =0,int num2=0):num1(num1),num2(num2){}

    void display()
    {

     cout<<num1<< " "<<num2<<endl;


    }
    void operator -()
    {
       num1*=-1;
       num2*=-1;

    }

    void operator +(int num)
    {

        int res;
        num1= num1 + num;
        num2= num2+num;
        cout<<res<<endl;

    }
};

int main()
{
    int num1=10,num2=-20;
   calculator cl1(num1,num2);
   //cl1.display();
   - cl1;
   cl1.display();
  int num = 10;
   cl1+num;
   cl1.display();

//frind function as to num+cl1
//first should be argument 
}