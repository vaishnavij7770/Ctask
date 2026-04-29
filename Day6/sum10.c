#include<stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    int a=10;
    
    printf("The sum of first %d numbers=%d",a,sum(a));
}