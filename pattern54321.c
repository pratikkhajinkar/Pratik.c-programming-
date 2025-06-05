#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    int even = 2;
    char ch = 'A';
    printf("enter a N");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i; j++, even += 2)
            printf("%d\t", even);
        printf("\n");
    }
    return 0;
}