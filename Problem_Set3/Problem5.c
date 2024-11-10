// C Program to add two matrix and put the result in a third one, then print the result.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rows, Columns;
    int i, j;

    printf("\nEnter Matrices dimensions (Rows and Columns):\n");
    scanf("%d %d", &Rows, &Columns);

    int Matrix1[Rows][Columns];
    int Matrix2[Rows][Columns];

    int Result[Rows][Columns];

    printf("\n\tEnter Matrix1 Elements!\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\nEnter Row %d Elements:\n", i);

        for (j = 0; j < Columns; j++)
        {
            scanf("%d", &Matrix1[i][j]);
        }
    }

    printf("\n\tEnter Matrix2 Elements!\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\nEnter Row %d Elements:\n", i);

        for (j = 0; j < Columns; j++)
        {
            scanf("%d", &Matrix2[i][j]);
        }
    }

    for (i = 0; i < Rows; i++)
    {
        for (j = 0; j < Columns; j++)
        {
            Result[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }


    printf("\nMatrix1 Elements are:\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\n");
        for (j = 0; j < Columns; j++)
        {
            printf("\t%d\t", Matrix1[i][j]);
        }
    }

    printf("\nMatrix2 Elements are:\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\n");
        for (j = 0; j < Columns; j++)
        {
            printf("\t%d\t", Matrix2[i][j]);
        }
    }

    printf("\nElements of Resultant Matrix after Addition are:\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\n");
        for (j = 0; j < Columns; j++)
        {
            printf("\t%d\t", Result[i][j]);
        }
    }

    return 0;
}
