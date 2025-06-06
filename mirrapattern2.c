#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter a Row");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
            printf("  ");
        printf("@ ");
        for (j = 1; j < i; j++)
            printf("$ ");
        printf("\n");
    }
}