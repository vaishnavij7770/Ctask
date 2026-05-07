#include<stdio.h>
int main(){
    FILE *a;
    a=fopen("aaa.txt","w");
    fputc('a',a);
    fclose(a);
}