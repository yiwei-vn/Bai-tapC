#include <stdio.h>

int main() {
   int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int copied[10];
   int loop, count;
   
   count = 9;
   
   for(loop = 0; loop < 10; loop++) {
      copied[count] = original[loop];
      count--;
   }
   printf("Sao chep mang trong C:\n\n");   
   printf("Mang ban dau -> Mang sao chep \n");
   
   for(loop = 0; loop < 10; loop++) {
      printf("    %2d          %2d\n", original[loop], copied[loop]);
   }

   
   return 0;
}