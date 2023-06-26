#include <stdio.h>
#include <time.h>

int input(int mat[5][5], int c, int r);
int menu();

void sum(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2);
void product(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2);
void trans(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2);
void display(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2);

void main()
{
    int mat1[5][5], mat2[5][5], c1 = 0, r1 = 0, c2 = 0, r2 = 0, i = 1, j = 0;
    char ch;
    while (1)
    {
        ch = menu();
        if (ch == '1')
        {
            printf("MATRIX ONE\n");
            printf("Enter column of matrix : ");
            scanf("%d", &c1);
            printf("Enter row of matrix : ");
            scanf("%d", &r1);
            input(mat1, c1, r1);
            printf("MATRIX TWO\n");
            printf("Enter column of matrix : ");
            scanf("%d", &c2);
            printf("Enter row of matrix : ");
            scanf("%d", &r2);
            input(mat2, c2, r2);
        }
        else if (ch == '2')
        {
            sum(mat1, mat2, c1, c2, r1, r2);
        }
        else if (ch == '3')
        {
            product(mat1, mat2, c1, c2, r1, r2);
        }
        else if (ch == '4')
        {
            trans(mat1, mat2, c1, c2, r1, r2);
        }
        else if (ch == '5')
        {
            display(mat1, mat2, c1, c2, r1, r2);
        }
        else if (ch == '6')
        {
            break;
        }
        else
        {
            continue;
        }
    }
}

int menu()
{
    char ch;
    printf("\n1. Set up matrices\n\n2. Sum of the matrices \n\n3. Product of two matrices \n\n4. Tranaspose of the matrices\n\n5. Diplay a matrices\n\n6. Exit\n\n");
    printf("Enter choice : ");
    scanf("%c", &ch);
    printf("\e[1;1H\e[2J");
    return ch;
}

int input(int mat[5][5], int c, int r)
{
    int i, j;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("Enter value at (%d,%d)", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    return 1;
}

void sum(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2)
{
    int i = 0, j = 0, sum[5][5];
    if ((c1 == c2) && (r1 == r2))
    {
        for (i = 0; i < c1; i++)
        {
            for (j = 0; j < r1; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        printf("The new matrix is : \n");
        for (i = 0; i < c1; i++)
        {
            for (j = 0; j < r1; j++)
            {
                printf("| %d\t |", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n The sum is not possible in this matrix!\n \n");
        sleep(2);
    }
}

void product(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2)
{
    int i = 0, j = 0, product[5][5], k;
    if ((c1 == c2) && (r1 == r2))
    {
        for (i = 0; i < c1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                product[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    product[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("The Prodct matrix is : \n");
        for (i = 0; i < c1; i++)
        {
            for (j = 0; j < r1; j++)
            {
                printf("| %d\t |", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n The product is not possible in this matrix!\n \n");
        sleep(2);
    }
}

void trans(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2)
{
    int i, j;
    printf("Transpose of MATRIX 1! \n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("|%d|", mat1[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of MATRIX 2! \n");
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < r2; j++)
        {
            printf("|%d|", mat2[j][i]);
        }
        printf("\n");
    }
}

void display(int mat1[5][5], int mat2[5][5], int c1, int c2, int r1, int r2)
{
    int i, j;
    printf("MATRIX 1 \n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("|%d|", mat1[i][j]);
        }
        printf("\n");
    }
    printf("MATRIX 2! \n");
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < r2; j++)
        {
            printf("|%d|", mat2[i][j]);
        }
        printf("\n");
    }
}