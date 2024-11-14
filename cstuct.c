#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{

int id;
char name[20]; 
char address[60];

};

void data( struct student  s2)
{

   s2.id = 20;

}
void data2( struct student * sptr)
{

  sptr->id = 20;

}

int main()
{

 struct student s1; 
 s1.id = 10;
 strcpy(s1.name,"kiran");

 strcpy(s1.address,"bangalore");

  
printf("%s\n",s1.name);


struct student *sptr = &s1;

printf("%d the accessing structure member using pionter use ->mark\n", sptr->id );


data(s1);
printf("%d this is regarding pass by value \n \n",s1.id);

data2(&s1);
printf("%d using the paass by reference method",s1.id);


//accesing the structure member using pointer use -> mark

//in structure it is possible to copy one structure to another structure
}