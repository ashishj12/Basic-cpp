#include <stdio.h>


int main()

{

    int sum;
    for(int i =3; i<=100; i=i+2){
        sum = sum+i;
    }
    
    printf("%d" ,sum);
    return 0;
}