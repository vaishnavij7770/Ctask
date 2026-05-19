#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("before insertion: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    for(int i=5;i>=0;i--){
        arr[i+1]=arr[i];
    }
    printf("\nInsert a num at position 0: ");
    scanf("%d",&arr[0]);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}