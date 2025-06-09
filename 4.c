#include <stdio.h>
int main()
{
    int i, n = 5, j;
    int count = 1;
    printf("enter a n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d\t", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}