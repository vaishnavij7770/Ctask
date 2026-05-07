#include<stdio.h>
int main(){
    FILE *a;
    char str[100];
    a=fopen("aaa.txt","r");

    while (fscanf(a,"%s",str)!=EOF){
        printf("%s ",str);
    }
    rewind(a);
    printf("\n");
    while (fscanf(a,"%s",str)!=EOF){
        printf("%s ",str);
    }
    rewind(a);
    printf("\n");
    while (fscanf(a,"%s",str)!=EOF){
        printf("%s ",str);
    }
    fclose(a);
}