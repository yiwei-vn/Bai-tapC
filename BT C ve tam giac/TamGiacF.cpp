#include <stdio.h>

int main() {
   int n,i,j,k=1;

   n = 5;

   printf("Ve tam giac Floyd:\n\n");
   for(i = 1; i <= n; i++) {
      for(j=1;j <= i; j++)
         printf("%3d", k++);

      printf("\n");
   }
   
   return 0;
}