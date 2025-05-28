#include <stdio.h>
int main()
{
    int x, y, i;
    printf("starting number: ");
    scanf("%d", &x);
    printf("ending number: ");
    scanf("%d", &y);
    for (i = x; i <= y; i++)
        printf("%d \n", i);
    return 0;
}