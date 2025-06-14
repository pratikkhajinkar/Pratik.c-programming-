#include <stdio.h>
int main()
{
    int i, n, j, a[100], key;
    printf("how many number you wants to enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter a number for delete");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + i];
            n--;
            break;
        }
    }
    printf("\n");
    for (j = 0; j < n; j++)
        printf("%d\n", a[i]);
    return 0;
}