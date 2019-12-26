#include <stdio.h>

int main() { 
   int a, b;
   int c = 1;
   
   b = 29;

   for(a = 2; a < b; a++) {
      if((b % a) == 0) {
         c = 0;
      }
   }

   if (c == 1)
      printf("So %d la so nguyen to.", b);
   else
      printf("So %d khong phai la so nguyen to.", b);
   return 0;
}
