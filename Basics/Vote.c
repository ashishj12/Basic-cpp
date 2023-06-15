#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d" ,&age);
    if (age >18)
    {
        printf("Adult \n");
        printf("You can vote \n");
        printf("Thank you \n");

    }
    else{
        printf("Not Adult \n");
        printf("You can not vote \n");

    }
    printf("Thank You \n");

    
    return 0;
}