#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
};
int main(){
    struct student s[5];

    int i;
    for(i=0; i<5; i++) {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s",&s[i].name);

    }
    printf("\nStudent Details:\n");
    for(i=0; i<5; i++) {
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
    }
    return 0;
}