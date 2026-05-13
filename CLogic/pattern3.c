//*    *
//*    *
//*    *
// *  *
//  **
#include <stdio.h>
int main(){
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            if(r==0&&c==0 || r==0&&c==4 || 
                r==1&&c==0 || r==1&&c==4 || 
                r==2&&c==0 || r==2&&c==4 || 
                r==3&&c==1 || r==3&&c==3 || 
                r==4&&c==2 || r==4&&c==3 ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
