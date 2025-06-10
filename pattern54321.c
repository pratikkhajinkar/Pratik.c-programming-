#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    char ch = 'A';
    printf("enter a N");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}