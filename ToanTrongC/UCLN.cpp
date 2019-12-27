#include<stdio.h>

int main() {
   int a, b, i, c;

   a = 12;
   b = 16;

   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      c = i;
   }

   printf("USCLN = %d", c);
   
   return 0;
}