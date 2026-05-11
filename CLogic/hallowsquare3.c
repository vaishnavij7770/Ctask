#include <stdio.h>
int main() {
    for(int r = 0; r < 4; r++) {
        for(int c = 0; c < 5; c++) {
          if(r==0 || r==3 || c==0 || c==4) {
              printf("1 ");
          } 
          else {
              printf("  ");
          }
        }
        printf("\n");
    }
    return 0;
}