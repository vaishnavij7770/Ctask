// #include<stdio.h>
// int main(){
//     int students[2][4]={ {23,34,43,12},{21,3244,23,32}};

//     for( int r=0; r<2; r++){
//         for(int c=0; c<4; c++){
//             printf("%d\t",students[r][c]);
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    char fruits[5][20]={"apple","banana","grapes","orange","mango"};
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", fruits[i]);  
    }
}