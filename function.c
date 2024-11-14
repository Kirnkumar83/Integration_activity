#include<stdio.h>

int factorial (int number)
{

  if (number <=1)
  return 1;
  else
  return number * factorial(number -1);

}

int main()
{

 int num;
 printf("Enter the number of ur choice\n");
 scanf("%d", &num);

     
 int res = factorial( num);
 printf( "the factorial of that number is %d\n",res);



} 
