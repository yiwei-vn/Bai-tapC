#include<stdio.h>


int main(){

    int a ,i ,j ;
    a=5;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
        }
    }

}
