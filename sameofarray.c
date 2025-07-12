#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, sum = 0, *p;
    printf("enter a number: ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    printf("sum %d\n", sum);
    return 0;
}