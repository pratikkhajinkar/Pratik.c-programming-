#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("enter a numbers");
    scanf("%d%d", &a, &b);
    printf("1.addition, 2.subtraction, 3.multiplication, 4.division");
    printf("enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("addition is %d", a + b);
        break;
    case 2:
        printf("subtraction is %d", a - b);
        break;
    case 3:
        printf("multiplicatin is %d", a * b);
        break;
    case 4:
        printf("division is %d", a / b);
        break;
    default:
        printf("invalid choice");
        break;
    }
}