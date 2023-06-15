#include<stdio.h>

int main()

{
  int marks;
  printf("Enter marks(0-100) \n");
  scanf("%d" ,&marks);
  if (marks >0 && marks <=30)
  {
    printf("Fail \n");
  }else if (marks>30 && marks<=100)
  {
    printf("Pass \n");  
  }else
  {
      printf("Wrong Marks \n");
  }
  return 0;
}
  