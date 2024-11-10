/*
Tutorial: C Program to Calculate the Average of Each Column in a 2D Array
In this tutorial, we will learn how to write a C program to calculate the average of each column in a 2D array. 
This is useful when analyzing data to determine column-based trends, such as finding average scores for tests or average values in datasets.

Problem Statement:
Create a C program that:
    1) Reads a 2D array of integers from user input.
    2) Computes and displays the average of each column in the array.
*/
    
#include <stdio.h>
#include <stdlib.h>

int main() {
    int Rows, Columns;
    int i, j;

    // Prompt the user to enter the dimensions of the array
    printf("\nEnter Array dimensions (Rows and Columns):\n");
    scanf("%d %d", &Rows, &Columns);

    int Array[Rows][Columns]; // Declare a 2D array
    float sum[Columns];       // Declare an array to hold the sum of each column

    // Initialize the sum array to zero
    for (j = 0; j < Columns; j++) {
        sum[j] = 0;
    }

    // Input: Read array elements from the user
    printf("\n\tEnter Array Elements!\n");
    for (i = 0; i < Rows; i++) {
        printf("\nEnter Row %d Elements:\n", i);
        for (j = 0; j < Columns; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    // Display the array elements
    printf("\nArray Elements are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n");
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Array[i][j]);
            sum[j] += Array[i][j];  // Add current element to the column sum
        }
    }

    // Output: Display the average of each column
    printf("\n\nColumn averages are:\n");
    for (j = 0; j < Columns; j++) {
        printf("Average of column %d is: %f\n", j + 1, sum[j] / Rows);
    }

    return 0;
}

