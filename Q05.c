#include <stdio.h>
#include <ctype.h>

int main()
{
    int up_c = 0, lw_c = 0, digit = 0, other = 0;
    char ch, n;

    printf("How many characters you want to check : ");
    scanf("%d", &n);
    printf("Enter Characters : \n");

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ch);

        if (isupper(ch) != 0)
            up_c += 1;

        else if (islower(ch) != 0)
            lw_c += 1;

        else if (isdigit(ch) != 0)
            digit += 1;

        else
            other += 1;
    }

    printf("\nUppercase characters : %d\nLowercase characters : %d\nDigits : %d\nOther characters : %d", up_c, lw_c, digit, other);

    return 0;
}