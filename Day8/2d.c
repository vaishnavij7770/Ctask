#include<stdio.h>
int main()
{
    int a[5][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};

    for (int r = 0; r < 5; r++){
        for (int c = 0; c < 2; c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
}