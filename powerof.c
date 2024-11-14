#include<stdio.h>


int main()
{


  int start =1;
  int end  = 5;
  int exponent;
  int poweroftwo;


  for(exponent=start;exponent<=end ;exponent++)
  {
   poweroftwo=1;

     
    for( int i=0;i<exponent;i++)
    {

        poweroftwo = poweroftwo * 2;

    }
   

  }
  printf("%d ",poweroftwo);


  return 0;


}