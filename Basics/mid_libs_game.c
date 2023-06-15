#include <stdio.h>

int main()

{
    char colour[20];
    char things[20];
    char celebrity[20];

    printf("Enter a color\n");
    scanf("%s" ,colour);
    printf("Enter a  things\n");
    scanf("%s" , things);
    printf("Enter the celebrity\n");
    scanf("%s" ,celebrity);


    printf("Roses are %s\n" ,colour);
    printf("%s are great\n" ,things);
    printf("I love\n %s" ,celebrity);

  return 0;
}