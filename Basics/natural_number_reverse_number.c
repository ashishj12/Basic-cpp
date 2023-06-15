
// print the n natural numbers & reverse the number
#include<stdio.h>

int main()
{
  int n;
  printf("Enter number\n");
  scanf("%d" ,&n);

  int sum=0;
  for(int i=0; i<=n;i++){
    sum = sum+i;

  }
  printf("sum is %d\n" ,sum);

  for(int i=n; i>=1;i--)  //print numbers in reverse
  {
    printf("%d\n" ,i);
  }
    return 0;
}