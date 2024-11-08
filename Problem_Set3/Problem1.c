// C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rows, Columns;
    int i, j;
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

    printf("\nArray Elements are:\n");

    for (i=0; i<Rows; i++)
    {
        printf("\n");

        for (j=0; j<Columns; j++)
        {
            printf("\t%d\t", Array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
