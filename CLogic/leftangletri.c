#include<stdio.h>
int main(){
    for(int r=0;r<5;r++){
        for(int s=4;s>r;s--){
            printf(" ");
        }
        for(int c=0;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
}