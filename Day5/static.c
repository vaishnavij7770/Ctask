#include<stdio.h>

int b;      //by default value=0
int add(){
    int v=10;      
    static int c;   // by default value=0
    v=v+1;
    b=b+1;
    c=c+1;

    printf("%d ",v);
    printf("%d ",b);
    printf("%d ",c);
}

int main(){
    add();
    add();
    add();
}