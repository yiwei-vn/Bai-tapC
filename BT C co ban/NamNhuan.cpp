#include <stdio.h>

int main() {
   int a;
   a = 2016;
   
   if (((a % 4 == 0) && (a % 100!= 0)) || (a%400 == 0))
      printf("%d la nam nhuan", a);
   else
      printf("%d khong phai la nam nhuan", a);
      
   return 0;
}
