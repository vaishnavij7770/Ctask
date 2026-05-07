#include<stdio.h>
int main(){
    FILE *a;
    a=fopen("aaa.txt","w");
    fputs("Hello vaishnavi",a);
    fclose(a);
}