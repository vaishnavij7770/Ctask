#include<stdio.h>
int main(){
    for(int r=0;r<5;r++){
        for(int c=0;c<6;c++){
            if(r==0 || r==2 || r==4 || r==1&&c==0 || r==3&&c==5){
                 printf("* ");  
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}