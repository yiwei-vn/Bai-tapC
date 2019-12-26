#include<stdio.h>
#include<string.h>

int main() {
   char str[100];
   int len;
 
   printf("\nNhap mot chuoi bat ky:\n");
   gets(str);
 
   len = strlen(str);
 
   printf("\nnDo dai cua chuoi da cho la: %d", len);
   return(0);