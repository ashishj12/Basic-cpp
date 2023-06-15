#include <stdio.h>

int main()

{
    int age;

    printf("enter your age : \n");
    scanf("%d" ,&age);

    if(age>=18)
    {
        printf("you are eligible for driving: \n");
    }
else
{
    printf("you are not eligible for driving\n");
}

}