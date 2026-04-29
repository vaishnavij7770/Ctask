#include<stdio.h>
int update(int *n){
    printf("\nbefore update n=%d",*n);    //10
    *n=*n+1;
    printf("\nafter update n=%d",*n);     //11
}
int main(){
    int a=10;
    printf("before function call a=%d",a);   //10
    update(&a);
    printf("\nafter function call a=%d",a);   //11
}