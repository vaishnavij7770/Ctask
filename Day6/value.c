#include<stdio.h>
int update(int n){
    printf("\nbefore update n=%d",n);
    n=n+1;
    printf("\nafter update n=%d",n);
}
int main(){
    int a=10;
    int b=20;
    printf("before function call a=%d",a);
    printf("\nbefore function call b=%d",b);
    update(a);
    update(b);
    printf("\nafter function call a=%d",a);
    printf("\nafter function call b=%d",b);
}