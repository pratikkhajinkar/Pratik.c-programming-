#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (i=1; i <= n; i++)
     sum += i;
    printf("sum of 1 to %d  is %d", n, sum);
    return 0;
}