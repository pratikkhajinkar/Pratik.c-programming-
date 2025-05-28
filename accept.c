//accept a character from the user disply it is capital or small or digit or special character in switch case
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A': case 'B': case 'C': case 'D': case 'E':
        case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'K': case 'L': case 'M': case 'N': case 'O':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'U': case 'V': case 'W': case 'X': case 'Y':
        case 'Z':
            printf("Capital letter\n");
            break;
        default:
            if (islower(ch))
                printf("Small letter\n");
            else if (isdigit(ch))
                printf("Digit\n");
            else
                printf("Special character\n");
    }
    return 0;
}