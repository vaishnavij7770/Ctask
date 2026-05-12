#include <stdio.h>
int main(){
    int r=4;
    for(int r=0; r<5; r++){
        int num=5;
        for(int c=0; c<5; c++){
            printf("%d ", num++);
           }
        printf("\n");
    }
}