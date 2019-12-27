#include<stdio.h>
#define M 50

struct state {
   char name[50];
   long int population;
   float literacyRate;
   float income;
} st[M]; /* khai bao mang cac struct */

int main() {
   int i, n, ml, mi, maximumLiteracyRate, maximumIncome;
   float rate;
   ml = mi = -1;
   maximumLiteracyRate = maximumIncome = 0;

   printf("Nhap so thanh pho:");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("\nNhap chi tiet thanh pho thu %d: ", i);

      printf("\nNhap ten thanh pho: ");
      scanf("%s", &st[i].name);

      printf("\nNhap tong so dan: ");
      scanf("%ld", &st[i].population);

      printf("\nNhap ti le biet doc viet: ");
      scanf("%f", &rate);
      st[i].literacyRate = rate;

      printf("\nNhap tong thu nhap: ");
      scanf("%f", &st[i].income);
   }

   for (i = 0; i < n; i++) {
      if (st[i].literacyRate >= maximumLiteracyRate) {
         maximumLiteracyRate = st[i].literacyRate;
         ml++;
      }
      if (st[i].income > maximumIncome) {
         maximumIncome = st[i].income;
         mi++;
      }
   }

   printf("\nThanh pho co ti le biet doc viet cao nhat: %s", st[ml].name);
   printf("\nThanh pho co tong thu nhap cao nhat: %s", st[mi].name);

   return (0);
}