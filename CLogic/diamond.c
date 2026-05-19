#include<stdio.h>
int  main(){
    //upper pyramid
    for(int r=1;r<=3;r++){
        for(int s=1;s<=3-r;s++){
            printf(" ");
        }
        for(int c=1;c<=(2*r)-1;c++){
            printf("*");
        }
        printf("\n");
    }
    //lower pyramid
    for(int r=2;r>=1;r--){
        for(int s=1;s<=3-r;s++){
            printf(" ");
        }
        for(int c=1;c<=(2*r)-1;c++){
            printf("*");
        }
        printf("\n");
    }
}
