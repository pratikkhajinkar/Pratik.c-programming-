#include <stdio.h>
int main()
{
    int n, cnt = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        cnt++;
        n=n /10;
    }
    printf("Number of digits: %d\n", cnt);
    return 0;
}