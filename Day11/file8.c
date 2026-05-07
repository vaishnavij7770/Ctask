#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("aaa.txt","w");
    fputs("c programming",ptr);

    fseek(ptr,0,SEEK_END);
    int len=ftell(ptr);

    fclose(ptr);
    printf("The length of the file is %d bytes",len);
}