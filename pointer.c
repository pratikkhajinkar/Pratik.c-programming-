#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("Enter number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Given Data:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}