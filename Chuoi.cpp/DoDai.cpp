#include <stdio.h>

int main() {
   char s1[] = "Vnyiwei";
   int i = 0;
      
   while(s1[i] != '\0') {
      i++;
   }
   
   printf("Do dai cua chuoi '%s' la: %d", s1, i);
   
   return 0;
}