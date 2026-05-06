#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++){
        for(int c=1;c<=5;c++){
            if(r==1|| r==3 || r==5){
            printf("2");
            }
            else{
            printf("1");
            }
        }
        printf("\n");
    }
}