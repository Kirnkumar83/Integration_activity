#include<stdio.h>


int main()
{

  int num =121;
  //int reverse ;
  int digit=0;
  int reverse = 0;
   int temp = num;
    while(num > 0)
    {

       digit = num%10;
       num = num/10;
       reverse = reverse*10+digit;

      //printf("%d\n",reverse);

    }
    if( reverse == temp)
    {

        printf("it's palindrome");
    }
    else
    {
        printf("not palindrome");
    }


}