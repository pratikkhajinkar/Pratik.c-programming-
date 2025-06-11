#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i, max, second, a[100];
    printf("enter a number:");
    scanf("%d", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    second = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (max = a[i])
        {
            second = max;
            max = a[i];
        }
        else if (a[i] > second && a[i] != max)
            second = a[i];
    }
    printf("2nd max is :%d", second);
    return 0;
}