// #include <stdio.h>

// int print(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     print(n - 1);
//     printf("%d ", n);
// }

// int main() {
//     int n = 20;
//     print(n);
//     return 0;
// }

// #include<stdio.h>

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
    
//     return (n%10) + sum(n/10);
// }

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Sum of digits of %d = %d",num,sum(num));
//     return 0;
// }

// #include<stdio.h>
// int reverse(int n){
//     if(n==0){
//         return 0;
//     }
//     printf("%d",n%10);
//     return reverse(n/10);
// }
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Reverse of %d = ",num);
//     reverse(num);
//     return 0;
// }

#include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d : ", n);
    for(int i=0; i<n; i++){
        printf("%d ", fib(i));
    }
    return 0;
}