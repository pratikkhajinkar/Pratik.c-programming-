//total numbers are sum//
#include <stdio.h>
int main()
{
    int a[100], i, sum = 0, n;
    printf("how many numbers you wants to enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum += a[i];
    printf("sum=%d", sum);
    return 0;
}