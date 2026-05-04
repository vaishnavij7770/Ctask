#include<stdio.h>
int main(){
    int a[2][3][3]={
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {11,12,13},
            {14,15,16},
            {17,18,19}
        }
    };
    for(int d=0; d<2; d++){
        for(int r=0; r<3; r++){
            for(int c=0; c<3; c++){
                printf("%d\t", a[d][r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
}