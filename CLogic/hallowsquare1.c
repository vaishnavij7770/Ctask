#include <stdio.h>
int main() {
    for(int r = 0; r < 5; r++) {
        for(int c = 0; c < 5; c++) {
          if(r==0 || r==4) {
              printf("* ");
          }
          else if (r==2 && c==0 || r==2 && c==4){
                printf("* ");
          }
          else if ((r==1 || r==3) && (c==0)) {
              printf("{ ");
          }
          else if ((r==1 || r==3) && (c==4)) {
              printf("} ");
            }
          else {
              printf("  ");
          }
        }
        printf("\n");
    }
    return 0;
}