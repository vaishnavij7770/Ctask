#include<stdio.h>
int main()
{
    int n=1;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}