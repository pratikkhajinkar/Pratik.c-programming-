#include <stdio.h>
int main()
{
    int n, j, i;
    printf("enter a row");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}