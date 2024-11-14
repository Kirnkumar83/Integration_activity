#include<stdio.h>
#include<stdlib.h>


struct student 
{
  int id;
  char *name;
  char *address;


};
struct student2
{
  int id;
  char name[20];
  char address[40];


};

struct student data( void)
{
    struct student s1;
    s1.id =100;
    s1.name = (char*) malloc (30*sizeof(char));
    s1.address = malloc(50*sizeof(char)); 
    return s1;

}




int main()
{
  struct student s1;

  struct student2 s[5];


  s1=data();
printf("%d",s1.id);


for ( int i=0;i<5;i++)
{

  scanf("%d\n", &s[i].id);
  

}
for(int j=0;j<5 ;j++)
{

    printf("%d\n", s[j].id);
}

}