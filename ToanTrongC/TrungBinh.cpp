#include <stdio.h>

int main() {
   int i,total;
   int a[] = {0,6,9,8,7};
   int n = 5;

   total = 0;
   
   for(i=0; i<n; i++) {
      total += a[i];
   }

   printf("Gia tri trung binh = %f\n", total/(float)n);
   return 0;
}