#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c", &ch);
    if (isupper(ch))
    {
        printf("capital letter");
    }
    else if (islower(ch))
    {
        printf("small letter");
    }
    else if (isdigit(ch))
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}