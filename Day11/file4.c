#include<stdio.h>
int main(){
    FILE *a;
    char c;
    a=fopen("aaa.txt","r");
    
    while((c=fgetc(a))!=EOF){
        printf("%c",c);
    }
    fclose(a);
}