#include<stdio.h>
int main(){
    FILE *a;
    a=fopen("aaa.txt","w");
    fputs("Hello vaishnavi",a);
    
    fseek(a,3,SEEK_SET);
    fputs("hi",a);
    fclose(a);
}