#include <stdio.h>


double canbac2(double n) {
   double i, a = 0.00001;

   for(i = 1; i*i <=n; i++);   

   for(--i; i*i < n; i += a);  

   return i;
}

int main() {
   int n = 25;

   printf("Can bac hai cua %d = %lf", n, canbac2(n));

   return 0;
}