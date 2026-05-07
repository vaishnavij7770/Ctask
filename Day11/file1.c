#include<stdio.h>
int main(){
    FILE *a;
    a=fopen("aaa.txt","w");
    fprintf(a,"Hello vaishnavi");
    fclose(a);
}