#include <stdio.h>
int main()
{
    int a[100], i, j, key, pos, count = 0, n, ch, flag;
    int temp = 0;
    printf("enter how many numbers you want:");
    scanf("%d", &n);
    printf("enter numbers:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (1)
    {
        printf("\n\n1. Display\n2. Search\n3. Insert\n4. Delete\n5. Count\n6. Reverse\n7. Exit\nEnter a choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case1:
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 2:
            flag = 0;
            printf("enter a number for search:");
            scabf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                printf("%d id found !!", key);
            else
                printf("%d is not found !!", key);
            break;
        case 3:
            printf("enter a number for insertion:");
            scanf("%d", &key);
            printf("enter a pos for intertion: ");
            scanf("%d", &pos);
            if (pos < 0 || pos > n)
            {
                printf("invalid position !!");
                break;
            }
            for (i = n; i > pos; i--)
            {
                a[i] = a[i - 1];
            }
            a[pos] = key;
            n++;
            printf("%d is inserted at position %d", key, pos);
            break;
        case 4:
            printf("enter a number for delete:");
            scanf("%d", &key);
            flag = 0;
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {

                    for (j = i; j < n - 1; j++)
                        a[j] = a[j + 1];
                    n--;
                }
            }
            printf("after number delition array=");
            for (i = 0; i < n; i++)
                printf("%d", a[i]);
            break;

        case 5:
            printf("enter a key");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                    count++;
            }
            if (count == 0)
                printf("no is not present in array");
            else
                printf("number count=%d", count);
            return 0;
            break;

        case 6:
            for (i = 0; i < n / 2; i++)
            {
                temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
            printf("reverce array=");
            for (i = 0; i < n; i++)
                printf("%d", a[i]);
            break;

        case 7:
            break;

        default:
            printf("Invalid Choice !!");
            break;
        }
    }
}
