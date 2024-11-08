/*
Tutorial: C Program to Find the Minimum and Maximum Value in a 2D Array
In this tutorial, we will create a C program to find and print the minimum and maximum values of elements in a 2D array.

Problem Statement:
Write a C program that:
    1) Asks the user to input the number of rows and columns for a 2D array.
    2) Reads the elements of the array from the user.
    3) Prints the 2D array and finds the minimum and maximum values among the elements.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Rows, Columns;
    int i, j;
    int max_value, min_value;

    // Prompt the user to enter the dimensions of the array
    printf("\nEnter Array dimensions:\n");
    scanf("%d %d", &Rows, &Columns);

    // Declare a 2D array with the user-defined dimensions
    int Array[Rows][Columns];

    // Input: Read array elements from the user
    printf("\n\tEnter Array Elements!\n");
    for (i = 0; i < Rows; i++) {
        printf("\nEnter Row %d Elements:\n", i + 1);
        for (j = 0; j < Columns; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    // Initialize max_value and min_value with the first element of the array
    max_value = Array[0][0];
    min_value = Array[0][0];

    // Output: Print the array elements and find min and max values
    printf("\nArray Elements are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n");
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Array[i][j]);

            // Update max_value if a larger element is found
            if (Array[i][j] > max_value)
                max_value = Array[i][j];

            // Update min_value if a smaller element is found
            if (Array[i][j] < min_value)
                min_value = Array[i][j];
        }
        printf("\n");
    }

    // Print the results for maximum and minimum values
    printf("\nMaximum value of Array Elements is: %d\n", max_value);
    printf("\nMinimum value of Array Elements is: %d\n", min_value);

    return 0;
}


