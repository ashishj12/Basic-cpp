#include <stdio.h>


int main() {
   char s[100];
   int i;
   printf("Enter a string\n : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("String in Upper Case = %s", s);
   return 0;
}