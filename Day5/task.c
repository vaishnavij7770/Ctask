//program first

// #include<stdio.h>

// int a=20; 
// int max(){
//     int v=10;      
       
//     if (a>=v)
//     {
//         printf("a is max number");
//     }
//     else{
//         printf("v is max number");
//     }

//     return v;
// }

// int main(){
//     max();
// }

// program second

#include <stdio.h>

int x, y; 

int swap() {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;  
}

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap();

    printf("After swapping: x = %d, y = %d\n", x, y);

}
