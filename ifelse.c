#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter three numbers");
    scanf("%d%d%d", &a, &b);
    if (c > a && c > b)

        printf("max is %d", c);
    else if (a > b && a > c)
    {
        printf("max is %d", a);
    }
    else
    {
        printf("max is %d", b);
    }
}