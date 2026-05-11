#include <stdio.h>
int main() {
    for(int r = 0; r < 5; r++) {
        for(int c = 0; c < 5; c++) {
          if(c==0 || c==4 ) {
              printf("v ");
          }
          else if(c==2 && r==0 || c==2 && r==4){
                printf("v ");
          }
          else if ((c==1 || c==3) && (r==0 || r==4)) {
              printf("j ");
          }
          else {
              printf("  ");
          }
        }
        printf("\n");
    }
    return 0;
}