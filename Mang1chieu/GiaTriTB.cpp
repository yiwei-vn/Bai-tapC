#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int a, b;
   float c;

   a = c = 0;
   
   printf("Chuong trinh tinh gia tri trung binh cua mang: \n\n");
   for(b = 0; b < 10; b++) {
      a = a + arr[b];
   }
   
   c = (float)a / b;
   
   printf("Gia tri trung binh cua mang la: %.2f", c);   
   
   return 0;
}