// Calculate average of each column in a 2D Array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rows, Columns;
    int i, j;

    printf("\nEnter Array dimensions (Rows and Columns):\n");
    scanf("%d %d", &Rows, &Columns);

    int Array[Rows][Columns];
    float sum[Columns];


    for (j = 0; j < Columns; j++) {
        sum[j] = 0;
    }

    printf("\n\tEnter Array Elements!\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\nEnter Row %d Elements:\n", i);

        for (j = 0; j < Columns; j++)
        {
            scanf("%d", &Array[i][j]);
        }
    }

    printf("\nArray Elements are:\n");

    for (i = 0; i < Rows; i++)
    {
        printf("\n");
        for (j = 0; j < Columns; j++)
        {
            printf("\t%d\t", Array[i][j]);


            sum[j] += Array[i][j];
        }
    }


    printf("\n\nColumn averages are:\n");
    for (j = 0; j < Columns; j++)
    {
        printf("Average of column %d is: %f\n", j + 1, sum[j] / Rows);
    }

    return 0;
}
