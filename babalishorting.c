#include <stdio.h>
int main()
{
    int n, j, i, temp, a[100];
    printf("how many number you wants to enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorded array \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}