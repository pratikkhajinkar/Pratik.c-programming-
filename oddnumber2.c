#include<stdio.h>
int main()
{
    int i, n;
    printf("enter an odd number: ");
    
    scanf("%d", &n);
    i = 1;
    do
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
        i++;
    } while (i <= n);
    
    return 0;
}