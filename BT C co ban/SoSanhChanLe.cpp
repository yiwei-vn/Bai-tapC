#include <stdio.h>

int main() {
   int a = 24;
   int b = 31;
   
   if (a % 2 == 0) {
      printf("%d la so chan\n", a);
   }
    else {
      printf("%d la so le\n", a);
   }
    if (b % 2 != 0 ) {
      printf("%d la so le\n", b);
   } 
     else {
      printf("%d la so chan\n", b);
   }
   return 0;
}
