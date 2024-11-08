// C Program to find the minimum & maximum value of array elements. (Min_Max Array)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rows, Columns;
    int i, j;

    int max_value, min_value;

    printf("\nEnter Array dimensions\n");

    scanf("%d %d", &Rows, &Columns);

    int Array[Rows][Columns];

    printf("\n\tEnter Array Elements!\n");

    for (i=0; i<Rows; i++)
    {
        printf("\nEnter Row%d Elements:\n", i);

        for (j=0; j<Columns; j++)
        {
            scanf("%d", &Array[i][j]);
        }
    }

    max_value = Array[0][0];
    min_value = Array[0][0];

    printf("\nArray Elements are:\n");

    for (i=0; i<Rows; i++)
    {
        printf("\n");
        for (j=0; j<Columns; j++)
        {
            printf("\t%d\t", Array[i][j]);

            if(Array[i][j] > max_value)
                max_value = Array[i][j];

            if (Array[i][j] < min_value)
                min_value = Array[i][j];
        }
        printf("\n");
    }

    printf("\nMaximum value of Array Elements is: %d\n", max_value);
    printf("\nMinimum value of Array Elements is: %d\n", min_value);

    return 0;
}

