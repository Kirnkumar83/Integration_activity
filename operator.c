#include<stdio.h>


int main()
{


    int x =10;
    //x= 10;
    printf("%d ",x);
   int y = ++x;
   printf("%d ",x);
    y = x++;
   printf("%d  %d ",x,y);
   printf("%d  ",sizeof('a')) ;
  float num; 
 num = (float )x/y;
  printf("%d",num);

}