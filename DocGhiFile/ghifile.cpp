#include<stdio.h>


int main(){
    FILE *fp;
    fp = fopen("dcm.txt","w");
    fputs("an vao thi biet",fp);
    fclose(fp);
}