#include <stdio.h>

int day_fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return day_fibonaci(i-1) + day_fibonaci(i-2);
}

int  main()
{
    int i;
    for (i = 0; i < 12; i++)
    {
       printf("%d\t%n", day_fibonaci(i));
    }
}    