//   **  
//  *  *
// *    *
// ******
// *    *
// *    *

#include<stdio.h>
int main(){
    for(int r=0;r<6;r++){
        for(int c=0;c<6;c++){
            if(r==3 || r==0&&c==2 || r==0&&c==3 || 
                r==1&&c==1 || r==1&&c==4 || 
                r==2&&c==0 || r==2&&c==5 || 
                r==4&&c==0 || r==4&&c==5 || 
                r==5&&c==0 || r==5&&c==5){
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