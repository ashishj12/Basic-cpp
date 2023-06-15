#include <stdio.h>

int main()

{

    int class;
    printf("Enter Your class\n");
    scanf("%d" ,&class);

    switch (class)
    {
    case 5:
      printf("you are in 5th A\n");
      break;
    
    case 6:
    printf("you are in 6th B\n");
      break;
    
      case 7:
      printf("you are in 7th C\n");
      break;

    default:
    printf("i have no information about your class\n");

      break;
    }

return 0;

}