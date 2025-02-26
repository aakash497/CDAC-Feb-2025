
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1, c;
    int num;

    printf("Enter number upto which you want to print fibonacci series: ");
    scanf("%d", &num);
    printf("Fibonacci Series:\n");
    printf("%d\n%d\n", a, b);
    for (int i = 0; i < num - 2; i++)

    {
        c = a + b;
        a = b;
        b = c;

        printf("%d\n", c);
    }

    return 0;
}
