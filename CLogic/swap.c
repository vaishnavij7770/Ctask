//with 3rd variable

// #include <stdio.h>

// int main() {
//     int a = 5, b = 10;
//     int c;
//     printf("Before swapping: a = %d, b = %d\n", a, b);
    
//     c = a;
//     a = b;
//     b = c;
    
//     printf("After swapping: a = %d, b = %d\n", a, b);
    
//     return 0;
// }

// //without 3rd variable
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}