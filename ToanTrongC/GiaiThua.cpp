#include <stdio.h>

int main() {
   int a;
   int b=1;
   int c = 6;

   for(a = 1; a<=c; a++) {
      b = b * a;
   }

   printf("Giai thua cua %d = %d \n", c, b);

   return 0;
}
