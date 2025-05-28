#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter a expression");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("addition is %d", a + b);
        break;
    case '-':
        printf("subtraction is %d", a - b);
        break;
    case '*':
        printf("multiplication is %d", a * b);
        break;
    case '/':   
        printf("division is %d", a / b);
        break;
    case '%':
        printf("modulus is %d", a % b);
        break;
    default:
        printf("invalid operator");
        break;
    }
}