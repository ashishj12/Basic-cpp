#include <stdio.h>

int main()

{

    int age;
    printf("Enter Your age\n");
    scanf("%d" ,&age);
    switch (age)
    {
    case 12:
        printf("the age is 12\n");    
      break;
     
     case 13:
        printf("the age is 13\n");    
      break;
    
    case 23:
        printf("the age is 23\n");    
      break;
    
    default:
    printf("Age is not 3,13 or 23\n");
        break;
    }




}
