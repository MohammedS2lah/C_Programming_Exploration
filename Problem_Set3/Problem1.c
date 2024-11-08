/*
Tutorial: C Program to Input and Print Array Elements Using Nested Loops
In this tutorial, we will write a C program that takes a 2D array input from the user and prints it using two nested for loops.

Problem Statement:
Create a C program that:
    1) Asks the user for the number of rows and columns for a 2D array.
    2) Reads the array elements from the user.
    3) Prints the 2D array in a formatted structure using nested for loops.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Rows, Columns;
    int i, j;

    // Prompt the user to enter the array dimensions (rows and columns)
    printf("\nEnter Array dimensions:\n");
    scanf("%d %d", &Rows, &Columns);

    // Declare a 2D array with the specified dimensions
    int Array[Rows][Columns];

    // Input: Read the elements of the array from the user
    printf("\n\tEnter Array Elements!\n");
    for (i = 0; i < Rows; i++) {
        printf("\nEnter Row %d Elements:\n", i + 1);
        for (j = 0; j < Columns; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    // Output: Print the array elements
    printf("\nArray Elements are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n"); // Print a newline for each row
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Array[i][j]); // Print each element in a formatted way
        }
        printf("\n"); // End the line after each row
    }
    return 0;
}

