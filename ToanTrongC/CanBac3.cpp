#include <stdio.h>

double canbac3(double n) {
   double i, a = 0.000001;
   
   for(i = 1; (i*i*i) <= n; ++i);   

   for(--i; (i*i*i) < n; i += a);  
   
   return i;
}

int main() {
   int n = 125;

   printf("Can bac ba cua %d = %lf", n, canbac3(n));

   return 0;
}