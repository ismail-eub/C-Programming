
                                           Simple Matrix:


#include <stdio.h>

int main()
{
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);


    int A[rows][columns];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Print the matrix
    printf("A=\t");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}






                                            Matrix Addition:




#include <stdio.h>

int main()
{
    int rows, columns;
    int A[10][10], B[10][10], X[10][10];


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);


    printf("Enter the elements of the matrix A:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("A =\t");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n\t");
    }


    printf("Enter the elements of the matrix B:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Print the matrix B
    printf("B =\t");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n\t");
    }

    // Matrix Addition
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            X[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n");

    // Print the matrix X
    printf("X = A + B\n\nX=\t");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", X[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}









                                                    Matrix Multiplication:




#include <stdio.h>

int main()
{
    int rows1, columns1, rows2, columns2;
    printf("Enter the number of rows of A: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of A: ");
    scanf("%d", &columns1);

    printf("Enter the number of rows of B: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of B: ");
    scanf("%d", &columns2);

    while (columns1 != rows2)
    {
        printf("Error!! Columns of A matrix must be equal to the rows of B matrix\n");

        printf("Enter the number of rows of A: ");
        scanf("%d", &rows1);
        printf("Enter the number of columns of A: ");
        scanf("%d", &columns1);

        printf("Enter the number of rows of B: ");
        scanf("%d", &rows2);

        printf("Enter the number of columns of B: ");
        scanf("%d", &columns2);
    }

    // Input matrix A
    printf("Enter the elements of the matrix A:\n");
    double A[rows1][columns1];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("\nA =\t");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("%.2lf\t", A[i][j]);
        }
        printf("\n\t");
    }

    // Input matrix B
    printf("Enter the elements of the matrix B:\n");
    double B[rows2][columns2];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%lf", &B[i][j]);
        }
    }

    printf("\nB =\t");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%.2lf\t", B[i][j]);
        }
        printf("\n\t");
    }

    // Initialize result matrix X to zeros
    double X[rows1][columns2];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            X[i][j] = 0.0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            for (int k = 0; k < columns1; k++)
            {
                X[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\n");
    printf("X = A X B\n\nX=\t");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%.2lf\t", X[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}








                                    Above the Main Diagonal






#include <stdio.h>
int main()
{
    double a[12][12];
    char c;
    scanf("%c", &c);

    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if(i<j)
            {
                sum += a[i][j];
            }


        }

    }

    if (c == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (c == 'M')
    {
        printf("%.1f\n", sum / 66.0);
    }

    return 0;
}


	Below the Main Diagonal

#include <stdio.h>

int main()
{
    double a[12][12];
    char c;
    scanf("%c", &c);

    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (i > j)
            {
                sum += a[i][j];
            }
        }
    }

    if (c == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (c == 'M')
    {
        printf("%.1f\n", sum / 66.0);
    }

    return 0;
}





                                Above the Secondary Diagonal



#include <stdio.h>

int main()
{
    double M[12][12];
    char operation;
    double sum = 0;


    scanf(" %c", &operation);


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (j < 11 - i)
            {
                sum += M[i][j];
            }
        }
    }


    if (operation == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (operation == 'M')
    {
        printf("%.1f\n", sum / 66.0);
    }

    return 0;
}




                                Below the Secondary Diagonal


#include <stdio.h>

int main()
{
    double M[12][12];
    char operation;
    double sum = 0;


    scanf(" %c", &operation);


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (j > 11 - i)
            {
                sum += M[i][j];
            }
        }
    }


    if (operation == 'S')
    {
        printf("%.1f\n", sum);
    }
    else if (operation == 'M')
    {
        printf("%.1f\n", sum / 66.0);
    }

    return 0;
}
