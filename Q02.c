
#include <stdio.h>

// int main()
// {
//     int num, fact = 1;
//     printf("Enter Number :");
//     scanf("%d", &num);
//     int n = num;

//     while (n > 0)
//     {
//         fact *= n;
//         n -= 1;
//     }

//     if ()
//     printf("Factorial of %d is %d ", num, fact);
//     return 0;
// }
int factorial(int num);

int main()
{
    int num;
    printf("Enter Number(number >= 0): ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
}

int factorial(int num)
{
    if (num == 0)
        return 1;

    else
        return num * factorial(num - 1);
}