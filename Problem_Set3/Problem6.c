// Try to implement jagged-Array (without using pointers)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int No_of_Arrays, max_col;
    int i, j;

    printf("\nEnter the number of Arrays:\n");
    scanf("%d", &No_of_Arrays);

    int Length[No_of_Arrays];

    printf("\nEnter the Max number of columns:\n");
    scanf("%d", &max_col);

    int Jagged_Array[No_of_Arrays][max_col];

    for (i=0; i<No_of_Arrays; i++)
    {
        printf("\nEnter the number of columns for Array%d:\n", i);
        scanf("%d", &Length[i]);
    }


    for (i=0; i<No_of_Arrays; i++)
    {
        printf("\nEnter the elements of Array%d:\n", i);

        for (j=0; j<Length[i]; j++)
        {
            scanf("%d", &Jagged_Array[i][j]);
        }
    }

    printf("\nJagged Array Elements are:\n");

    for (i=0; i<No_of_Arrays; i++)
    {
        printf("\n");
        for (j=0; j<Length[i]; j++)
        {
            printf("\t%d\t", Jagged_Array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
