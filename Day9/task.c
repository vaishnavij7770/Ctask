#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");

    gets(str);

    int i = 0;
    int count = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("Number of vowels in the string: %d", count);    
    int len=strlen(str);
    printf("\nLength of the string: %d", len);
}