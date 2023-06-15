#include <stdio.h>


int main()


{
    
    int age,percent;
    printf("Enter Your age btw 10 to 15\n ");
    scanf("%d" ,&age);
    
    switch (age)
   {
       
    case 10:
    printf("You should  now in 7th class\n");
    break;
    
    case 11:
    printf("you  should now in 8th class\n");
    break;
    
    case 12:
    printf("you should  now in 9th class\n");
    break;
    
    case 13:
    printf("you should  now in 10th class\n");
    break;
    
    case 14:
    printf("you  should now in 11th class\n");
    break;
    
    case 15:
    printf("you should  now in 12th class\n");
    break;
    
    default:
    printf("i have no information about your age\n");
    break;
   }
   
   return 0;
}