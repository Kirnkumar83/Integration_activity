#include<stdio.h>

//int sum (int,int);

int add(int a, int b)
{

    return a+b;
}   


int main()
{





int (*ptr)(int ,int);

//ptr = sum -->address fo the function
ptr= add;

printf("%p\n",add(4,5));
printf("%p\n",(*add)(6,2));


}