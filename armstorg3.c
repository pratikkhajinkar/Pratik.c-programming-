#include<stdio.h>
#include<math.h>
int main()
{
    int n, result = 0, temp,cnt=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n>0)
    {
        cnt++;
         n=n / 10;
    }
    n= temp ;
    while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, cnt);
         n /= 10;
    }   
    if (result == temp)
        printf( "Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}