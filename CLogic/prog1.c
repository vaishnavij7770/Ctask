#include <stdio.h>
int square(int n) {
    return n * n;
}
int main() {
    int num = 5;
    printf("The square of %d is %d\n", num, square(num));
}