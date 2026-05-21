#include<stdio.h>
int main()
{
    char str[100];
    printf("enter the string\n");
    scanf("%s",str); 
    int index;
    printf("enter the index");
    scanf("%d",&index);
    for(int i=0; str[i]!='\0';i++)
    {
        if(i==index)
        {
            printf("char:%c",str[i]);
        }
    }
    return 0;
}