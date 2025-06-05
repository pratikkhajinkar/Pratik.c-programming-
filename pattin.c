#include<stdio.h>
int main()
{
    int i,j,n;
    char ch='A';
    printf("enter a N");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
        printf("%c%c ",ch,ch+32);
        ch++;
        }
        printf("\n");
    }

}