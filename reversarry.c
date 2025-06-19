#include <stdio.h>
int main()
{
    int i, j, k, n, a[100], temp;
    printf("enter how many number you want :");
    scanf("%d", &n);
    printf("enter arry element :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf (" reveras array :");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}