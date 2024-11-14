#include<stdio.h>

int sum (int num, int num2)
{
  return num+num2;
}
int sub (int num3,int num4)
{


    return num3- num4;
}

int oper( int (*fptr)(int num,int num1),int num,int num1)

{
  fptr(num,num1);
}
int main()
{
    
  int (*fptr[])(int,int)={sum,sub};
   
   ////fptr = sum;
   printf("%d\n", oper(fptr[0],2,4));
   //fptr = sub;
   printf("%d\n",oper(fptr[1],2,4));


//used to make registration of the other funtions
//registered funtion will be executing just before compli program termination
//
}