
#include <stdio.h>

int main()
{
    int num1, num2, sign;
    printf("Enter numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Press\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Divide\n");
    scanf("%d", &sign);
    switch(sign)
    {
        
        case 1 : printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
        case 2 : printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
        case 3 : printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
        case 4 : if(num2 != 0)
                           printf("%d / %d = %d\n", num1, num2, num1 / num2);
                       else
                           printf("Divisor can't be zero\n");
                 break;
        default : printf("Invalid\n");
    }
   return 0;
}


