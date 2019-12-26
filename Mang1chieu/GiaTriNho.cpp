#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int a, b;

   b = array[0];
   
   printf("Chuong trinh tim phan tu nho nhat cua mang:\n\n");
   for(a = 1; a < 10; a++) {
      if( b > array[a] ) 
         b = array[a];
   }
   
   printf("Phan tu nho nhat cua mang la: %d", b);   
   
   return 0;
}
