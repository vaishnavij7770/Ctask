//pyramid with numbers

#include<stdio.h>
int main(){
    int n=1;
        for(int r=1;r<5;r++){
            for(int s=4;s>r;s--){
                printf(" ");
            }
            for(int c=1;c<=(2*r)-1;c++){
                printf("%d",n);
                n++;
            }
            printf("\n");
    }
}