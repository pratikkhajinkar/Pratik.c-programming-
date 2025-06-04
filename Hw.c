#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, temp, flag, result, cnt;
    int ch;

    while (1)
    {
        printf("\n1. Factorial\n2. Prime\n3. Palindrome\n4. Perfect\n5. Armstrong\n6. Reverse\n7. EXIT\nEnter a Choice : ");
        scanf("%d", &ch);
 
        if(ch == 7)
            return 0;

        printf("\nEnter a Number : ");
        scanf("%d", &n);
        switch (ch)
        {
        case 1:
            result = 1;
            i = 2;
            while (i <= n)
            {
                result *= i;
                i++;
            }
            printf("Factorial of %d is %d", n, result);
            break;
        case 2:
            flag = 1;
            if (n % 2 == 0 || n % 3 == 0)
                flag = 0;
            else
            {
                for (i = 5; i <= sqrt(n); i += 6)
                {
                    if (n % i == 0 || n % (i + 2) == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 1)
                printf("Prime Number !!");
            else
                printf("NOT Prime Number !!");
            break;
        case 3:
            result = 0;
            temp = n;
            while (n > 0)
            {
                int rem = n % 10;
                result = result * 10 + rem;
                n /= 10;
            }
            if (result == temp)
                printf("Palindrome Number !! ");
            else
                printf("Not Palindrome Number !!");
            break;
        case 4:
            result = 0;
            for (i = 1; i <= n / 2; i++)
            {
                if (n % i == 0)
                    result += i;
            }
            if (result == n)
                printf("Perfect number !!");
            else
                printf("Not Perfect Number !!");
            break;
        case 5:
            result = 0;
            temp = n;
            cnt = 0;
            while (n > 0)
            {
                cnt++;
                n = n / 10;
            }
            n = temp;
            while (n > 0)
            {
                int rem = n % 10;
                result = result + pow(n, cnt);
                n = n / 10;
            }
            if (result == n)
                printf("Armstrong Number !!");
            else
                printf("NOT Armstrong Number !!");
            break;
        case 6:
            result = 0;
            while (n > 0)
            {
                int rem = n % 10;
                result = result * 10 + rem;
                n /= 10;
            }
            printf("Reverse Number is : %d", result);
            break;
        case 7:
            return 0;
        default:
            printf("INVALID CHOICE !!");
        }
        
    }
    
}