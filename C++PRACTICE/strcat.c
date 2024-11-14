#include<stdio.h>
#include<string.h>
int main()
{
  char src[30] = "hello";
  char dest[30] = "world";
  char *ptr ;
 ptr = strcat (src ,dest );
   puts(ptr);
   puts(src);
}

