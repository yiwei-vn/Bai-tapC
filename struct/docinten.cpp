#include<stdio.h>
#define SIZE 50

struct student {
   char name[30];
   int rollno;
   int sub[3];
};

int main() {
   int i, j, max, count, total, n, a[SIZE], ni;
   struct student st[SIZE];

   printf("Nhap so luong sinh vien: ");
   scanf("%d", &n);

   /* vong lap for de nhap ten va ma sinh vien*/
   for (i = 0; i < n; i++) {
      printf("\nNhap ten va ma sv cho sinh vien %d: ", i);
      scanf("%s", &st[i].name);
      scanf("%d", &st[i].rollno);
   }

   /* vong lap for de doc mon hoc thu i cua sinh vien thu i*/
   for (i = 0; i < n; i++) {
      for (j = 0; j <= 2; j++) {
         printf("\nNhap diem thi %d cho mon hoc %d: ", i, j);
         scanf("%d", &st[i].sub[j]);
      }
   }

   /* (i) vong lap for de tinh tong diem cua moi sinh vien*/

   for (i = 0; i < n; i++) {
      total = 0;
      for (j = 0; j < 3; j++) {
         total = total + st[i].sub[j];
      }
      printf("\nTong diem cua sinh vien %s la: %d", st[i].name,total);
      a[i] = total;
   }

   /* (ii) vong lap for de liet ke cac ma sv co diem thi cao
   nhat trong moi mon hoc */

   for (j = 0; j < 3; j++) {
      max = 0;
      for (i = 0; i < n; i++) {
         if (max < st[i].sub[j]) {
            max = st[i].sub[j];
            ni = i;
         }
      }
      printf("\nSinh vien %s dat diem cao nhat = %d voi mon hoc: %d",st[ni].name, max, j);
   }

   max = 0;

   for (i = 0; i < n; i++) {
      if (max < a[i]) {
         max = a[i];
         ni = i;
      }
   }

   printf("\nSinh vien %s co tong diem cao nhat.", st[ni].name);
   return(0);
}