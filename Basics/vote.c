#include <stdio.h>

int main()
{
   int age;
   printf("Enter your age\n");
   scanf("%d" ,&age);
    printf("You have entered %d age you\n" ,age);
    if (age>=18)
    {
        printf("You can vote\n");
    }
    else if (age>10)
    {
        printf("you can vote for 10 to 18\n");
    }
    
   else {
       printf("You can not vote\n");
   }
    return 0;
}
