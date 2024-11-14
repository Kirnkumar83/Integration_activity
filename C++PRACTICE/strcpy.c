#include<stdio.h>

  void my_strcpy(char*dest,const char *src)
  {

      while(*src!='\0')
      {

         *dest++=*src++;
      
      }
 

  }

int main() 
{
  char str[]="hello world";
  char str1[20]; 
  my_strcpy(str1,str);

  printf("%s",str1);
}