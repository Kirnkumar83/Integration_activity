#include<stdio.h>

mystr_len(char*str)
{


   int count=0;
    while( *str != '\0')
    {
     count++;
     str++;
    }
}



int main()
{

  char *str = "hello";

   int len=mystr_len(str);
   printf("%d",len);


}