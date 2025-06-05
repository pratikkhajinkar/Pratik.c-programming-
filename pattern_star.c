#include <stdio.h>
int main()
{
    int i, j, n;
    char ch = 'A';
    printf("enter a N");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == n || i == 1 || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}