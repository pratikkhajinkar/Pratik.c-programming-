#include<stdio.h>
int main()
{
    // Accept
    // 1. Display 2. Search 3. Insert 4. Delete 5. Count 6. Reverse 7. Exit
    
    int a[100], i,j,key,pos,cnt,n,ch,flag;
 
    printf("How many numbers you wants to enter : ");
    scanf("%d",&n);

    printf("Enter Numbers : \n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    while (1)
    {
        printf("\n\n1. Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. Count\n 6. Reverse\n 7. Exit\nEnter a Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            for ( i = 0; i < n; i++)
                printf("%d\n",a[i]);
            break;
        case 2: //Linear Search
            flag = 0;
            printf("Enter a Number for Search : ");
            scanf("%d",&key);
            for ( i = 0; i < n; i++)
            {
                if(key == a[i])
                {
                    flag = 1;
                    break; //for loop
                }
            }
            if(flag)
                printf("%d is Found !!",key);
            else 
                printf("%d is Not Found !!",key);
            break;//Switch 
            
        default:
            printf("Invalid Choice !!");
            break;
        }
    }
}