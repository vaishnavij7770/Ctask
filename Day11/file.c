#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("myfile.txt","w");
    fprintf(ptr,"hi this is my first file handling process");
    fclose(ptr);
}