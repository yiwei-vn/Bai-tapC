#include<stdio.h>

int main() {
   int a[10][10], b[10][10], c[10][10], i, j, k;
   int sum = 0;

   printf("\nNhap ma tran dau tien:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nNhap ma tran thu hai:\n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &b[i][j]);
      }
   }

   printf("Ma tran dau tien: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("Ma tran thu hai: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }

   for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nTich cua hai ma tran la: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }

   return (0);
}