#include<stdio.h>
int update(int n){
    printf("\nbefore update n=%d",n);
    n=n+1;
    printf("\nafter update n=%d",n);
}
int main(){
    int a=10;
    printf("before function call a=%d",a);
    update(a);
    printf("\nafter function call a=%d",a);
}