#include<stdio.h>

int main() {
   int a, b, max, step, lcm;

   a   = 3;
   b   = 4;
   lcm = 0;

   if(a > b)
      max = step = a;
   else
      max = step = b;

   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm = max;
         break;    
      }

      max += step;
   }

   printf("BSCNN = %d", lcm);
   return 0;
}