#include <stdio.h>

int main() {
   int a, b, c;

   a = 10;
   b = 20;
   c = 30;

   if ( a > b && a > c )
      printf("%d la so lon nhat.", a);
   else if ( b > a && b > c )
      printf("%d la so lon nhat.", b);
   else if ( c > a && c > b )
      printf("%d la so lon nhat.", c);
   else   
      printf("Gia tri cua cac so la khong duy nhat");

   return 0;
}
