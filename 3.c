#include <stdio.h>
int main()
{
    int i, k, j, n;
    printf("enter a n");
    scanf("%d", &n);
    for (i = n;i>=1;i--)
    {
          for (j = i; j >= 1; j--)   
                printf("%d ",j);
        
        printf("\n");
    }
    return 0;
}