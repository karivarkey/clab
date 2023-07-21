#include <stdio.h>
int input(int mat[5][5], int c, int r);
int menu();
void sum(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2);
void product(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2);
void trans(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2);
void display(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2);
void main()
{
    int mat1[5][5], mat2[5][5], ch, row1 = 0, col1 = 0, row2 = 0, col2 = 0, i = 1, j = 0;
    while (1)
    {
        ch = menu();
        if (ch == 1)
        {
            printf("\nEnter no. of rows of matrix 1: ");
            scanf("%d", &row1);
            printf("Enter no. of columns of matrix 1: ");
            scanf("%d", &col1);
            printf("\n");
            input(mat1, row1, col1);
            printf("\nEnter no. of rows of matrix 2: ");
            scanf("%d", &row2);
            printf("Enter no. of columns of matrix 2: ");
            scanf("%d", &col2);
            printf("\n");
            input(mat2, row2, col2);
        }
        else if (ch == 2)
        {
            sum(mat1, mat2, row1, row2, col1, col2);
        }
        else if (ch == 3)
        {
            product(mat1, mat2, row1, row2, col1, col2);
        }
        else if (ch == 4)
        {
            trans(mat1, mat2, row1, row2, col1, col2);
        }
        else if (ch == 5)
        {
            display(mat1, mat2, row1, row2, col1, col2);
        }
        else
        {
            break;
        }
    }
}
int menu()
{
    int ch;
    printf("\n1. Set up matrices\n");
    printf("2. Sum of the matrices \n");
    printf("3. Product of the matrices\n");
    printf("4. Tranaspose of the matrices\n");
    printf("5. Diplay the matrices\n\n");
    printf("Enter any other number to exit\n\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    return ch;
}
int input(int mat[5][5], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value at (%d,%d): ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    return 1;
}
void sum(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2)
{
    int i = 0, j = 0, sum[5][5];
    if ((row1 == row2) && (col1 == col2))
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        printf("The sum is: \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe sum is not possible\n");
    }
}
void product(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2)
{
    int i = 0, j = 0, product[5][5], k;
    if (col1 == row2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                product[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    product[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("The product is : \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe product is not possible\n");
    }
}
void trans(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2)
{
    int i, j, trans1[5][5], trans2[5][5];
    printf("\nTranspose of matrix 1:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            trans1[j][i] = mat1[i][j];
        }
    }
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            printf("%d \t", trans1[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix 2:\n");
    for (i = 0; i < col2; i++)
    {
        for (j = 0; j < row2; j++)
        {
            trans2[j][i] = mat2[i][j];
        }
    }
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d \t", trans2[i][j]);
        }
        printf("\n");
    }
}
void display(int mat1[5][5], int mat2[5][5], int row1, int row2, int col1, int col2)
{
    int i, j;
    printf("\nMatrix 1:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
}