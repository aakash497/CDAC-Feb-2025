#include <stdio.h>

int main()
{
    int num, n;
    printf("How many numbers you would like to enter :");
    scanf("%d", &n);
    printf("Enter Numbers:\n");
    scanf("%d", &num);
    int max_val = num;

    for (int i = 0; i < n - 1; i++)

    {
        scanf("%d", &num);

        if (num > max_val)
            max_val = num;
    }

    printf("The largest number is %d of all entered numbers.", max_val);

    return 0;
}
