#include<stdio.h>
int main()
{
    float i, n;
    printf("enter a number: ");
    scanf("%f", &n);
    i=1;
    do
    {
        printf("%f \n", i);
        i*= 2;
    } while (i <= n);
    return 0;
}