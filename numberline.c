#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter a N");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%c", 'A' + i);
        printf("\n");
    }
}
