#include <stdio.h>

void get_data(int arr[30][30], int r, int c);
void print_data(int arr[30][30], int r, int c);

int main()
{

    int mat1[30][30], mat2[30][30], r1, c1, r2, c2;
    printf("Enter row and column i.e. size of 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter row and column i.e. size of 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2)
    {
        get_data(mat1, r1, c1);
        get_data(mat2, r2, c2);
        int mul_mat[30][30];
        int mul = 0;

        for (int k = 0; k < r1; k++)

        {
            for (int i = 0; i < r1; i++)

            {
                mul = 0;

                for (int j = 0; j < c1; j++)
                {
                    mul += mat1[k][j] * mat2[j][i];
                }

                mul_mat[k][i] = mul;
            }
        }
        print_data(mul_mat, r1, c1);
    }

    else
    {
        printf("\nMatrices are Incompatible for multiplication.");
    }

    return 0;
}

void print_data(int arr[30][30], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

void get_data(int arr[30][30], int r, int c)
{
    printf("Enter data into the array \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}