#include<stdio.h>
int main(){
    for(int r=3;r>=1;r--){
        for(int s=1;s<=3-r;s++){
            printf(" ");
        }
        for(int c=1;c<=(2*r)-1;c++){
            printf("*");
        }
        printf("\n");
    }
}