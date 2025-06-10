#include <stdio.h>
int main()
{
    int cnt = 0, key, n, i, a[100];
    printf("how many number you wants to enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter number for occurance;");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
            cnt++;
    }
    if (cnt == 0)
        printf("not found");
    else
        printf("found is %d", cnt);
    return 0;
}