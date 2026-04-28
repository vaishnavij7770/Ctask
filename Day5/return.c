#include<stdio.h>

int display(){
    int ab=67;      //local var
    return ab;
}

int main(){
    printf("%d",display());
}