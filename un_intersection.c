#include <stdio.h>
int main()
{
    int a[100], b[100], n1, n2;
    int uni[200], intersection[100];
    int i, j, k, un, in;
    printf("how many no you want to enter in first array: ");
    scanf("%d", &n1);
    printf("enter numbers:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("how many no you want to enter in second array: ");
    scanf("%d", &n2);
    printf("enter numbers:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    // Union
    for (i = 0; i < n1; i++)
        uni[i] = a[i];
    un = n1;
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
                break;
        }
        if (j == n1)
        {
            uni[un] = b[i];
            un++;
        }
    }
    printf("Union of two arrays is: ");
    for (i = 0; i < un; i++)
        printf("%d ", uni[i]);
    printf("\n");
    // Intersection
    in = 0;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                intersection[in] = a[i];
                in++;
                break;
            }
        }
    }
    printf("Intersection of two arrays is: ");
    for (i = 0; i < in; i++)
        printf("%d ", intersection[i]);
    printf("\n");
    return 0;
}