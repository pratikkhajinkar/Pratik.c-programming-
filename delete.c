#include <stdio.h>
int main()
{
    int a[100], i, j, key, n;
    printf("enter a n :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter a number for delete :");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + i];
            n--;
            i--;
        }
    }
    printf("after deletion of number :\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}