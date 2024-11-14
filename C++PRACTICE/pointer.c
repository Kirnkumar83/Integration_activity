#include<stdio.h>
int main()
{
int a = 10;
int b =20;
int c = 30 ;
int *ptr[3];
ptr[0]= &a;
ptr[1]= &b;
ptr[2] = &c;
//printf("%d\n", *ptr[0] );
for(int i=0;i<3;i++)
{
    printf("%d\n", *(ptr[i]+1));
}
int a[2] = {10,29};
int b[2] = {20,50};
int c[2]= { 40,60};
int *ptr1[3] ={ a ,b, c};
}