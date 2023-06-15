#include<stdio.h>

int main()
{

  int marks;
  printf("Enter marks(1-100) \n");
  scanf("%d" ,&marks);
  if (marks<30)
  {
    printf("Grade is C\n");
  }else if (marks<=30 && marks<90)
  {
    printf("grade is A \n");
  }
  else if (marks<=90 && marks<=100)
  {
    printf("Grade is A+\n");
  }
  
return 0;
}