#include<stdio.h>

int main()
{

  int number;
  printf("Enter the number \n");
  scanf("%d" ,&number);
  if(number % 2==0){
    printf("%d is even \n");
  }else{
    printf("%d is odd \n");
  }
  return 0;
}