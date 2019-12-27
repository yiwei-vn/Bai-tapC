#include<stdio.h>

int main() {
   int a = 20;
   int b = 15;
	
   int *ptr1, *ptr2;
   ptr1 = &a;
   ptr2 = &b;
   int tong;

   tong = *ptr1 + *ptr2;

   printf("Tong hai so = %d", tong);
   return (0);
}