#include <stdio.h>

int main() {
   float percentage;
   int total_marks = 86;
   int scored = 50;

   percentage = (float)scored / total_marks * 100.0;

   printf("Gia tri phan tram = %.2f%%", percentage);

   return 0;
}