#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("before insertion: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    arr[5]=6;
    printf("\nafter insertion: ");
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}