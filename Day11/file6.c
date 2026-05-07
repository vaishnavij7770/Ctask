#include<stdio.h>
int main(){
    FILE *a;
    char text[300];
    a=fopen("aaa.txt","r");
    printf("%s",fgets(text,200,a));
    fclose(a);
}