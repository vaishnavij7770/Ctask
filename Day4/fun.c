// function

// #include<stdio.h>
// int hello(){
//     printf("hello function");
// }
// int main(){
//     hello();
//     hello();
// }

// #include<stdio.h>
// int add();      // function declaration
// int add(){      //function def
//     int a=2;
//     int b=3;
//     int c=a+b;
//     printf("%d", c);
// }
// int main(){
//     add();          //function calling
// }

// types of function

// default function

// int add();      // function declaration
// int add(){      //function def
//     int a=2;
//     int b=3;
//     int c=a+b;
//     printf("%d", c);
// }
// int main(){
//     add();          //function calling
// }

// parameterized function

int sub (int a, int b){     // parameters
    int c=a-b;
    printf("%d",c);
}
int main(){
    sub(78,45);         // arguments
}


