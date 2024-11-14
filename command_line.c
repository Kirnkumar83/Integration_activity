#include<stdio.h>

int main( char argc ,char**argv)
{

printf("no of argument \n");

for(int i=0;i<argc;i++)
{
  
  printf("%d , -%s\n",i+1,argv[i]);


}
return 0;
}
