#include<stdio.h>
#include<stdlib.h>

int main() {
   int num;
   char marks[3];

   printf("Nhap diem thi: ");
   scanf("%s", marks);

   num = atoi(marks);
   printf("\nDiem thi vua nhap: %d", num);

   return (0);
}