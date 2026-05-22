#include<stdio.h>
int main()
{
    char str[]="Fortune";
    char ch='a';
    int flag = 0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==1){
        printf("Element Found");
    }
    else{
        printf("Element Not Found");
    }
    return 0;
}