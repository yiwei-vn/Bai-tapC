#include <stdio.h>

int tinhgiaithua(unsigned int i)
{
   if(i <= 1)
   {
      return 1;
   }
   return i * tinhgiaithua(i - 1);
}
int  main()
{
    int i = 5;
    printf("Gia tri giai thua cua %d la %d\n", i, tinhgiaithua(i));
}    