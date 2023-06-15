#include<stdio.h>

struct stud_record
{
 char name[25];
 char cls[5];
 int roll_no;
};
int main()
{
 struct stud_record student,*s;
 s=&student;
 printf("Enter name: ");
 scanf("%s",s->name);
 printf("Enter class: ");
 scanf("%s",s->cls);
 printf("Enter roll no.: ");
 scanf("%d",&s->roll_no);
 printf("\n\n");
 printf("RECORD ENTERED\nName: %s\n",s->name);
 printf("Class: %s",s->cls);
 printf("\nRoll no. %d",s->roll_no);
 return 0;

}