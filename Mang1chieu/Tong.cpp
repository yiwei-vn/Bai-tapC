#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;

   sum = 0;
   
   printf("Chuong trinh tinh tong gia tri cac phan tu mang: \n\n");
   for(loop = 9; loop >= 0; loop--) {
      sum = sum + array[loop];      
   }

   printf("Tong gia tri cua mang la: %d.", sum);   

   return 0;
}