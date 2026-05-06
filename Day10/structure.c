#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[20];
    float wt;
}e1;
int main()
{
    e1.id=101;
    strcpy(e1.name,"Ravi");
    e1.wt=75.5;
    printf("ID: %d\n",e1.id);
    printf("Name: %s\n",e1.name);
    printf("Weight: %.2f\n",e1.wt);
    return 0;
}