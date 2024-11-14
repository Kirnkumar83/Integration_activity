#include<iostream>
using namespace std;

int add ( int &num1,int &num2)
{

   num1 =20;
   num2 = 40;

   return num1+num2;

}


int main()
{

  int num1 = 10;
  int num2 = 20;


  int sem= add( num1,num2);

printf("%d",sem);



}