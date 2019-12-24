#include <stdio.h>

int main() {
   int a;
   printf("nhung so le la:");
   for(a=1;a<=20;a++){
       if(a%2!=0)
       printf("%d\n",a);
   }

   return 0;
}