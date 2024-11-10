/*
Tutorial: C Program to Implement a Jagged Array (Without Using Pointers)
In this tutorial, we will create a C program to implement a jagged array (an array of arrays with different column sizes) without using pointers. 
A jagged array is useful for representing data structures like matrices where rows can have different lengths.

Problem Statement:
Write a C program that:
    1) Accepts the number of arrays (rows) and their individual lengths from the user.
    2) Accepts and stores elements for each array.
    3) Prints the elements in a jagged array format.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int No_of_Arrays, max_col;
    int i, j;

    // Get the number of arrays (rows) from the user
    printf("\nEnter the number of Arrays:\n");
    scanf("%d", &No_of_Arrays);

    // Create an array to store the length of each sub-array (row)
    int Length[No_of_Arrays];

    // Get the maximum number of columns (to allocate storage, though not all may be used)
    printf("\nEnter the Max number of columns:\n");
    scanf("%d", &max_col);

    // Create a 2D array with fixed rows and columns
    int Jagged_Array[No_of_Arrays][max_col];

    // Input the length of each sub-array (number of columns for each row)
    for (i = 0; i < No_of_Arrays; i++) {
        printf("\nEnter the number of columns for Array%d:\n", i);
        scanf("%d", &Length[i]);
    }

    // Input elements for each row of the jagged array
    for (i = 0; i < No_of_Arrays; i++) {
        printf("\nEnter the elements of Array%d:\n", i);
        for (j = 0; j < Length[i]; j++) {
            scanf("%d", &Jagged_Array[i][j]);
        }
    }

    // Print the jagged array elements
    printf("\nJagged Array Elements are:\n");
    for (i = 0; i < No_of_Arrays; i++) {
        printf("\n");
        for (j = 0; j < Length[i]; j++) {
            printf("\t%d\t", Jagged_Array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

