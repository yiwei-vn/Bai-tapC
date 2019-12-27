#include<stdio.h>


int main() {
   int numArray[10];
   int i, sum = 0;
   int *ptr;
 
   printf("\nNhap 10 phan tu: ");
 
   for (i = 0; i < 10; i++)
      scanf("%d", &numArray[i]);
 
   ptr = numArray;
 
   for (i = 0; i < 10; i++) {
      sum = sum + *ptr;
      ptr++;
   }
 
   printf("Tong cac phan tu cua mang la: %d", sum);
   return(0);
}