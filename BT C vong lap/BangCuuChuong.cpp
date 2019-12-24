#include <stdio.h>

int main() {
   int i, j, a;
   int b, c;

   b = 2, c = 10;

   printf("bang cuu chuong rut gon:\n");
   for(i = b; i <= c; i++) {
      a = i;

      for(j = 1; j <= 10; j++) {
         printf(" %3d", a*j);
      }

      printf("\n");
   }

   return 0;
}