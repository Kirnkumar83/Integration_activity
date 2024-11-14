#include<stdio.h>
int main()
{
   // int a[2][3] ={1,2,3};

   // int (*ptr)[3]= a;

//printf("%d %d", **ptr,*ptr );

int *ptr[3];
//first staic second dynamic
for( int i=0;i<4 ;i++)
{
   printf("Enter the size i th of row\n");
   ptr[i]= malloc(3*sizeof(int ));


}
//first dynamic second static --> row are dynamic col are static
//pointer to an array
int (*ptr1)[3]; 
ptr1 = malloc(3*sizeof(int*));

//both row and column are dynamic

int **ptr2;
int row=3,column = 2;
//read row from the user;

ptr2 = malloc(row*sizeof(int*));

//read column from the use;


for(int i=0;i<3;i++)
{

ptr2[i]= malloc(column*sizeof(int));

}


}
