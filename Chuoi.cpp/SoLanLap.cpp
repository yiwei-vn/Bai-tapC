#include <stdio.h>

int main() {
   char s[] = "VnYiweiBestIgnisVN";    
   char ch = 'V';             
	
   int i = 0;
   int count = 0;             
      
   while(s[i] != '\0') {
      if(s[i] == ch)
         count++;

      i++;
   }
   
   if(count > 0) {
      if(count == 1)
         printf("Ky tu %c xuat hien %d lan trong chuoi '%s'", ch, count, s);
      else
         printf("Ky tu %c xuat hien %d lan trong chuoi '%s'", ch, count, s);
   }else
      printf("Ky tu%c khong co mat trong chuoi %s", ch, s);
   
   return 0;
}