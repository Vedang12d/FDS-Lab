
#include <stdio.h>

int main()
{
    int op;
    int a[100][100], b[100][100], i, j, k, r, c, r1, c1;
    do
    {
        printf("\n\nPerform following queries \n1) Triplet representation of sparse matrix \n");
        printf("2) Addition of 2 matrices \n");
        printf("3) Transpose of a matrix \n");
        printf("4) Exit \n");
        printf("Enter suitable option: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter number of rows and columns:");
            scanf("%d %d", &r, &c);

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    a[i][j] = 0;
                }
            }

            printf("\nEnter the elements in the matrix:\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Elements are:\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }
            printf("\nTriplet representation of sparse matrix is \n");
            printf("Row\t\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", i);
                    }
                }
            }

            printf("\n");
            printf("Column\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", j);
                    }
                }
            }

            printf("\n");
            printf("Value\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", a[i][j]);
                    }
                }
            }

            break;

        case 2:
            printf("Enter number of rows and columns for matrix 1:");
            scanf("%d %d", &r, &c);

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    a[i][j] = 0;
                }
            }

            printf("\nEnter the elements in matrix 1 :\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Elements in matrix 1 are:\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }
            printf("\nTriplet representation of sparse matrix 1 is \n");
            printf("Row\t\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", i);
                    }
                }
            }

            printf("\n");
            printf("Column\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", j);
                    }
                }
            }

            printf("\n");
            printf("Value\t");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (a[i][j] != 0)
                    {
                        printf("%d\t", a[i][j]);
                    }
                }
            }
            printf("\n");
            printf("Enter number of rows and columns for matrix 2:");
            scanf("%d %d", &r1, &c1);

            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    b[i][j] = 0;
                }
            }

            printf("\nEnter the elements in matrix 2:\n");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            printf("Elements in matrix 2 are:\n");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    printf("%d\t", b[i][j]);
                }
                printf("\n");
            }
            printf("\nTriplet representation of sparse matrix 2 is \n");
            printf("Row\t\t");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    if (b[i][j] != 0)
                    {
                        printf("%d\t", i);
                    }
                }
            }

            printf("\n");
            printf("Column\t");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    if (b[i][j] != 0)
                    {
                        printf("%d\t", j);
                    }
                }
            }

            printf("\n");
            printf("Value\t");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    if (b[i][j] != 0)
                    {
                        printf("%d\t", b[i][j]);
                    }
                }
            }

            break;
        case 3:

            break;
        }

    } while (op != 4);
}