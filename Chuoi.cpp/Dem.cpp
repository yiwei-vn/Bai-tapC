#include <stdio.h>

int main() {
   char s[] = "VnYiweiBestIgnisVN";     
   int i = 0;
   int vowels = 0;            
   int consonants = 0;        
      
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
         consonants++;
   }
   
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, vowels, consonants);

   return 0;
}