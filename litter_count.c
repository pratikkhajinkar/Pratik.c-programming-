#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("enter a name :");
    scanf("%s",&name);
    printf("count is %d",strlen(name));
    return 0;
}